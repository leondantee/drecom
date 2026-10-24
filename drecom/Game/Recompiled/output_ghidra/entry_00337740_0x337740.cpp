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

// Function: entry_00337740
// Address: 0x337740 - 0x33779c
void entry_00337740_0x337740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337740_0x337740");
#endif

    ctx->pc = 0x337740u;

    // 0x337740: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x337744: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x337744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x337748: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33774c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x33774cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x337750: 0x8fb200ac  lw          $s2, 0xAC($sp)
    ctx->pc = 0x337750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x337754: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x337754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x337758: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x337758u;
    {
        const bool branch_taken_0x337758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x337758) {
            ctx->pc = 0x33779Cu;
            return;
        }
    }
    ctx->pc = 0x337760u;
    // 0x337760: 0x8fb100ac  lw          $s1, 0xAC($sp)
    ctx->pc = 0x337760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x337764: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x337764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x337768: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x337768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33776c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x33776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x337770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337774: 0x8c5e1390  lw          $fp, 0x1390($v0)
    ctx->pc = 0x337774u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x337778: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x337778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x33777c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x337780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x337780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337784: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x337784u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x337788: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x337788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x33778c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x337790: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x337790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337794: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x337794u;
    SET_GPR_U32(ctx, 31, 0x33779Cu);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x337794u, 0x33779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33779Cu;
}
