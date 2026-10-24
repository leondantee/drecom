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

// Function: entry_00125148
// Address: 0x125148 - 0x125188
void entry_00125148_0x125148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125148_0x125148");
#endif

    ctx->pc = 0x125148u;

    // 0x125148: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12514c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x12514cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x125150: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x125150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x125154: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x125154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x125158: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x125158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x12515c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12515cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x125160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125164: 0x0  nop
    ctx->pc = 0x125164u;
    // NOP
    // 0x125168: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x125168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x12516c: 0x3c0237a7  lui         $v0, 0x37A7
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14247 << 16));
    // 0x125170: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x125174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125178: 0x0  nop
    ctx->pc = 0x125178u;
    // NOP
    // 0x12517c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x12517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x125180: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x125180u;
    {
        const bool branch_taken_0x125180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125180) {
            ctx->pc = 0x1251C0u;
            return;
        }
    }
    ctx->pc = 0x125188u;
}
