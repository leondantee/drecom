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

// Function: entry_0011edac
// Address: 0x11edac - 0x11edd8
void entry_0011edac_0x11edac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011edac_0x11edac");
#endif

    ctx->pc = 0x11edacu;

    // 0x11edac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11edb0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x11edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x11edb4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x11edb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11edb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EDB8u;
    {
        const bool branch_taken_0x11edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDB8u;
        // 0x11edbc: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edb8) {
            ctx->pc = 0x11EE00u;
            return;
        }
    }
    ctx->pc = 0x11EDC0u;
    // 0x11edc0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x11edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11edc4: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x11edc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11edc8: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x11edcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11edccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11edd0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11edd4: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x11edd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    ctx->pc = 0x11edd8u;
}
