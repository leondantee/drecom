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

// Function: entry_0023feac
// Address: 0x23feac - 0x23fee0
void entry_0023feac_0x23feac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023feac_0x23feac");
#endif

    ctx->pc = 0x23feacu;

    // 0x23feac: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23feb0: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x23feb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x23feb4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x23feb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x23feb8: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x23feb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x23febc: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FEBCu;
    {
        const bool branch_taken_0x23febc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23febc) {
            ctx->pc = 0x23FEE0u;
            return;
        }
    }
    ctx->pc = 0x23FEC4u;
    // 0x23fec4: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x23fec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fec8: 0x95090006  lhu         $t1, 0x6($t0)
    ctx->pc = 0x23fec8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x23fecc: 0x312afffb  andi        $t2, $t1, 0xFFFB
    ctx->pc = 0x23feccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65531);
    // 0x23fed0: 0xa50a0006  sh          $t2, 0x6($t0)
    ctx->pc = 0x23fed0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x23fed4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fed8: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fedc: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x23fedcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x23fee0u;
}
