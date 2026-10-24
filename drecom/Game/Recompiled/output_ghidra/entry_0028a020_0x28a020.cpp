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

// Function: entry_0028a020
// Address: 0x28a020 - 0x28a0c8
void entry_0028a020_0x28a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a020_0x28a020");
#endif

    switch (ctx->pc) {
        case 0x28a078u: goto label_28a078;
        default: break;
    }

    ctx->pc = 0x28a020u;

    // 0x28a020: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x28a020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a024: 0x1460fe76  bnez        $v1, . + 4 + (-0x18A << 2)
    ctx->pc = 0x28A024u;
    {
        const bool branch_taken_0x28a024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a024) {
            ctx->pc = 0x289A00u;
            return;
        }
    }
    ctx->pc = 0x28A02Cu;
    // 0x28a02c: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x28a02cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x28a030: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x28a030u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a034: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x28a034u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x28a038: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28a03c: 0x34661043  ori         $a2, $v1, 0x1043
    ctx->pc = 0x28a03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x28a040: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28a040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a044: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x28a044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x28a048: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a04c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x28a04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28a050: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x28a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x28a054: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x28a054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x28a058: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28a058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a05c: 0xfd060008  sd          $a2, 0x8($t0)
    ctx->pc = 0x28a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 6));
    // 0x28a060: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28a064: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28a064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a068: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a06c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28a06cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28a070: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28A070u;
    SET_GPR_U32(ctx, 31, 0x28A078u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28A070u, 0x28A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A078u;
label_28a078:
    // 0x28a078: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28a078u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a07c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28a080: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x28a080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x28a084: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x28a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x28a088: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28a088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a08c: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x28a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x28a090: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a094: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x28a094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x28a098: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a09c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x28a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x28a0a0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x28a0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28a0a4: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x28a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
    // 0x28a0a8: 0x8e475dc8  lw          $a3, 0x5DC8($s2)
    ctx->pc = 0x28a0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x28a0ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28a0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a0b0: 0x14e60005  bne         $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A0B0u;
    {
        const bool branch_taken_0x28a0b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x28a0b0) {
            ctx->pc = 0x28A0C8u;
            return;
        }
    }
    ctx->pc = 0x28A0B8u;
    // 0x28a0b8: 0x8e465dcc  lw          $a2, 0x5DCC($s2)
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x28a0bc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x28a0bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a0c0: 0x10d3000a  beq         $a2, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x28A0C0u;
    {
        const bool branch_taken_0x28a0c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        if (branch_taken_0x28a0c0) {
            ctx->pc = 0x28A0ECu;
            return;
        }
    }
    ctx->pc = 0x28A0C8u;
}
