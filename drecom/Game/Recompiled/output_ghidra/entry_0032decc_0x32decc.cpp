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

// Function: entry_0032decc
// Address: 0x32decc - 0x32df24
void entry_0032decc_0x32decc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032decc_0x32decc");
#endif

    ctx->pc = 0x32deccu;

    // 0x32decc: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x32deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32ded0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32ded0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ded4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32ded8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32ded8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dedc: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x32dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x32dee0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32dee0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32dee8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x32dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x32deec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32def0: 0x345e1043  ori         $fp, $v0, 0x1043
    ctx->pc = 0x32def0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32def4: 0xaede0004  sw          $fp, 0x4($s6)
    ctx->pc = 0x32def4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 30));
    // 0x32def8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x32def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32defc: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x32defcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x32df00: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32df00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32df04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DF04u;
    {
        const bool branch_taken_0x32df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32df04) {
            ctx->pc = 0x32DF24u;
            return;
        }
    }
    ctx->pc = 0x32DF0Cu;
    // 0x32df0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32df10: 0x24431a14  addiu       $v1, $v0, 0x1A14
    ctx->pc = 0x32df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32df14: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32df14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32df18: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x32df18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x32df1c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32DF1Cu;
    SET_GPR_U32(ctx, 31, 0x32DF24u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32DF1Cu, 0x32DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF24u;
}
