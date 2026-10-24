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

// Function: entry_0010bb48
// Address: 0x10bb48 - 0x10bbd0
void entry_0010bb48_0x10bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb48_0x10bb48");
#endif

    ctx->pc = 0x10bb48u;

label_10bb48:
    // 0x10bb48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10bb4c: 0x0  nop
    ctx->pc = 0x10bb4cu;
    // NOP
    // 0x10bb50: 0x0  nop
    ctx->pc = 0x10bb50u;
    // NOP
    // 0x10bb54: 0x0  nop
    ctx->pc = 0x10bb54u;
    // NOP
    // 0x10bb58: 0x0  nop
    ctx->pc = 0x10bb58u;
    // NOP
    // 0x10bb5c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BB5Cu;
    {
        const bool branch_taken_0x10bb5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bb5c) {
            ctx->pc = 0x10BB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bb48;
        }
    }
    ctx->pc = 0x10BB64u;
    // 0x10bb64: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10bb68: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb6c: 0x24a544e0  addiu       $a1, $a1, 0x44E0
    ctx->pc = 0x10bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17632));
    // 0x10bb70: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x10bb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x10bb74: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x10bb74u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3844E0u));
    // 0x10bb78: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb7c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x10bb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x10bb80: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x10bb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x10bb84: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10bb84u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x10bb88: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb8c: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x10bb8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x10bb90: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x10bb90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3844F0u));
    // 0x10bb94: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10bb94u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x10bb98: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x10bb98u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x384500u));
    // 0x10bb9c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10bb9cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x10bba0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x10bba0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x384510u));
    // 0x10bba4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10bba4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x10bba8: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x10bba8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x384520u));
    // 0x10bbac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10bbacu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x10bbb0: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x10bbb0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x384520u));
    // 0x10bbb4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10bbb4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x10bbb8: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x10bbb8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x384520u));
    // 0x10bbbc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10bbbcu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x10bbc0: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x10bbc0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x384520u));
    // 0x10bbc4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10bbc4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x10bbc8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x10bbc8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 7));
    // 0x10bbcc: 0x0  nop
    ctx->pc = 0x10bbccu;
    // NOP
    ctx->pc = 0x10bbd0u;
}
