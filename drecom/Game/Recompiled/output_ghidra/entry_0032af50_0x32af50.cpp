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

// Function: entry_0032af50
// Address: 0x32af50 - 0x32afe0
void entry_0032af50_0x32af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032af50_0x32af50");
#endif

    ctx->pc = 0x32af50u;

    // 0x32af50: 0x920328b9  lbu         $v1, 0x28B9($s0)
    ctx->pc = 0x32af50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10425)));
    // 0x32af54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32af54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32af5c: 0x14830105  bne         $a0, $v1, . + 4 + (0x105 << 2)
    ctx->pc = 0x32AF5Cu;
    {
        const bool branch_taken_0x32af5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32af5c) {
            ctx->pc = 0x32B374u;
            return;
        }
    }
    ctx->pc = 0x32AF64u;
    // 0x32af64: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32af64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32af68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32af68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32af70: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af74: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32af74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32af78: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32af78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32af7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32af84: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af88: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32af8c: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x32AF8Cu;
    {
        const bool branch_taken_0x32af8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32af8c) {
            ctx->pc = 0x32B11Cu;
            return;
        }
    }
    ctx->pc = 0x32AF94u;
    // 0x32af94: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32af94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32af98: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x32af98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af9c: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32AF9Cu;
    {
        const bool branch_taken_0x32af9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32af9c) {
            ctx->pc = 0x32AFE0u;
            return;
        }
    }
    ctx->pc = 0x32AFA4u;
    // 0x32afa4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32afa8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32afac: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32afb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32afb4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32afb8: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32afbc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32afbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32afc0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AFC0u;
    {
        const bool branch_taken_0x32afc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32afc0) {
            ctx->pc = 0x32AFE0u;
            return;
        }
    }
    ctx->pc = 0x32AFC8u;
    // 0x32afc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32afc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32afcc: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x32afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32afd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32afd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32afd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32afd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32afd8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32AFD8u;
    SET_GPR_U32(ctx, 31, 0x32AFE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32AFD8u, 0x32AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFE0u;
}
