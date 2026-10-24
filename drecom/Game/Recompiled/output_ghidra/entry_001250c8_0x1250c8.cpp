#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001250c8
// Address: 0x1250c8 - 0x125108
void entry_001250c8_0x1250c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001250c8_0x1250c8");
#endif

    ctx->pc = 0x1250c8u;

    // 0x1250c8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1250c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1250cc: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x1250ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1250d0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1250d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1250d4: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x1250d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x1250d8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1250d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1250dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1250e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1250e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1250e4: 0x0  nop
    ctx->pc = 0x1250e4u;
    // NOP
    // 0x1250e8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1250e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1250ec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1250ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x1250f0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1250f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x1250f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1250f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1250f8: 0x0  nop
    ctx->pc = 0x1250f8u;
    // NOP
    // 0x1250fc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1250fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x125100: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x125100u;
    {
        const bool branch_taken_0x125100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125100) {
            ctx->pc = 0x1251C0u;
            return;
        }
    }
    ctx->pc = 0x125108u;
}
