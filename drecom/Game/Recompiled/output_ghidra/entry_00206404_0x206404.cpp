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

// Function: entry_00206404
// Address: 0x206404 - 0x20643c
void entry_00206404_0x206404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206404_0x206404");
#endif

    ctx->pc = 0x206404u;

    // 0x206404: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x206404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x206408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20640c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206410: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x206410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x206414: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206418: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x206418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20641c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20641cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206424: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x206424u;
    {
        const bool branch_taken_0x206424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x206424) {
            ctx->pc = 0x20646Cu;
            return;
        }
    }
    ctx->pc = 0x20642Cu;
    // 0x20642c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20642Cu;
    {
        const bool branch_taken_0x20642c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20642c) {
            ctx->pc = 0x20643Cu;
            return;
        }
    }
    ctx->pc = 0x206434u;
    // 0x206434: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x206434u;
    {
        const bool branch_taken_0x206434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206434) {
            ctx->pc = 0x20671Cu;
            return;
        }
    }
    ctx->pc = 0x20643Cu;
}
