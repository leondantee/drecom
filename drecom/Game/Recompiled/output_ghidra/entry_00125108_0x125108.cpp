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

// Function: entry_00125108
// Address: 0x125108 - 0x125148
void entry_00125108_0x125108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125108_0x125108");
#endif

    ctx->pc = 0x125108u;

    // 0x125108: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12510c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x12510cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x125110: 0x240200bb  addiu       $v0, $zero, 0xBB
    ctx->pc = 0x125110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x125114: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x125114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x125118: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x12511c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x125120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125124: 0x0  nop
    ctx->pc = 0x125124u;
    // NOP
    // 0x125128: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x125128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x12512c: 0x3c02391d  lui         $v0, 0x391D
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14621 << 16));
    // 0x125130: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x125130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x125134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125138: 0x0  nop
    ctx->pc = 0x125138u;
    // NOP
    // 0x12513c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x12513cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x125140: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x125140u;
    {
        const bool branch_taken_0x125140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125140) {
            ctx->pc = 0x1251C0u;
            return;
        }
    }
    ctx->pc = 0x125148u;
}
