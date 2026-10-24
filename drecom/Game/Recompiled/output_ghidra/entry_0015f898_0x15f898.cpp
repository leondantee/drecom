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

// Function: entry_0015f898
// Address: 0x15f898 - 0x15f8e0
void entry_0015f898_0x15f898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f898_0x15f898");
#endif

    ctx->pc = 0x15f898u;

    // 0x15f898: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f89c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15f89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15f8a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15F8A0u;
    {
        const bool branch_taken_0x15f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f8a0) {
            ctx->pc = 0x15F8E0u;
            return;
        }
    }
    ctx->pc = 0x15F8A8u;
    // 0x15f8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8ac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f8b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f8b4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f8b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f8bc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f8c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f8c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f8c8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15f8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f8cc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f8d0: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F8D8u;
    {
        const bool branch_taken_0x15f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f8d8) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F8E0u;
}
