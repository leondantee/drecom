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

// Function: entry_0028ad48
// Address: 0x28ad48 - 0x28af8c
void entry_0028ad48_0x28ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ad48_0x28ad48");
#endif

    switch (ctx->pc) {
        case 0x28ad98u: goto label_28ad98;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae78u: goto label_28ae78;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aedcu: goto label_28aedc;
        case 0x28af60u: goto label_28af60;
        case 0x28af6cu: goto label_28af6c;
        default: break;
    }

    ctx->pc = 0x28ad48u;

    // 0x28ad48: 0x2ae60002  slti        $a2, $s7, 0x2
    ctx->pc = 0x28ad48u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28ad4c: 0x14c0ff32  bnez        $a2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x28AD4Cu;
    {
        const bool branch_taken_0x28ad4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ad4c) {
            ctx->pc = 0x28AA18u;
            return;
        }
    }
    ctx->pc = 0x28AD54u;
    // 0x28ad54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28ad58: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ad58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x28ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x28ad60: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28ad64: 0x34761043  ori         $s6, $v1, 0x1043
    ctx->pc = 0x28ad64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x28ad68: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28ad68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad6c: 0xad160004  sw          $s6, 0x4($t0)
    ctx->pc = 0x28ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 22));
    // 0x28ad70: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28ad74: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28ad74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad78: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x28ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x28ad7c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x28ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ad80: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28ad84: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x28ad84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ad88: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ad88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ad8c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28ad8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28ad90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AD90u;
    SET_GPR_U32(ctx, 31, 0x28AD98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AD90u, 0x28AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD98u;
label_28ad98:
    // 0x28ad98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ad98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ad9c: 0x8fb60128  lw          $s6, 0x128($sp)
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ada0: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x28ada0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x28ada4: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x28ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x28ada8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28ada8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28adac: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adb0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x28adb4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28adb8: 0x34661009  ori         $a2, $v1, 0x1009
    ctx->pc = 0x28adb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x28adbc: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28adbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adc0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x28adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x28adc4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adc8: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x28adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x28adcc: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x28adccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28add0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28add0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28add4: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28add4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28add8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28add8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28addc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28ADDCu;
    SET_GPR_U32(ctx, 31, 0x28ADE4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28ADDCu, 0x28ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADE4u;
label_28ade4:
    // 0x28ade4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ade4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ade8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adec: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x28adecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28adf0: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x28adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x28adf4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28adf8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28adfc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28ae00: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x28ae00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x28ae04: 0x34e81015  ori         $t0, $a3, 0x1015
    ctx->pc = 0x28ae04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4117);
    // 0x28ae08: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae0c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x28ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x28ae10: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x28ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28ae14: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ae14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae18: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x28ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x28ae1c: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x28ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ae20: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28ae20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ae24: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae28: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28ae28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AE2Cu;
    SET_GPR_U32(ctx, 31, 0x28AE34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AE2Cu, 0x28AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE34u;
label_28ae34:
    // 0x28ae34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ae34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae38: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae3c: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x28ae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28ae40: 0xafa80128  sw          $t0, 0x128($sp)
    ctx->pc = 0x28ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 8));
    // 0x28ae44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x28ae48: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae4c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x28ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x28ae50: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x28ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28ae54: 0x34c2103f  ori         $v0, $a2, 0x103F
    ctx->pc = 0x28ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4159);
    // 0x28ae58: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae5c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x28ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x28ae60: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ae64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28ae64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae68: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae6c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x28ae6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28ae70: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AE70u;
    SET_GPR_U32(ctx, 31, 0x28AE78u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AE70u, 0x28AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE78u;
label_28ae78:
    // 0x28ae78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28ae78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ae7c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae80: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x28ae80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28ae84: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x28ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x28ae88: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28ae8c: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28ae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28ae90: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x28ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x28ae94: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28ae98: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x28ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x28ae9c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aea0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x28aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x28aea4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x28aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aea8: 0xfce00008  sd          $zero, 0x8($a3)
    ctx->pc = 0x28aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 0));
    // 0x28aeac: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28aeb0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28aeb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28aeb4: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x28aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aeb8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28aeb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28aebc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AEBCu;
    SET_GPR_U32(ctx, 31, 0x28AEC4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AEBCu, 0x28AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEC4u;
label_28aec4:
    // 0x28aec4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28aec4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28aec8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x28aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28aecc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28aed0: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x28aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x28aed4: 0xc0a3d7c  jal         func_28F5F0
    ctx->pc = 0x28AED4u;
    SET_GPR_U32(ctx, 31, 0x28AEDCu);
    ctx->pc = 0x28F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F5F0u, 0x28AED4u, 0x28AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEDCu;
label_28aedc:
    // 0x28aedc: 0x8e485dc8  lw          $t0, 0x5DC8($s2)
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x28aee0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28aee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28aee4: 0x1507012b  bne         $t0, $a3, . + 4 + (0x12B << 2)
    ctx->pc = 0x28AEE4u;
    {
        const bool branch_taken_0x28aee4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x28aee4) {
            ctx->pc = 0x28B394u;
            return;
        }
    }
    ctx->pc = 0x28AEECu;
    // 0x28aeec: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x28aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28aef0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x28aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x28aef4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28aef4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28aef8: 0x0  nop
    ctx->pc = 0x28aef8u;
    // NOP
    // 0x28aefc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28aefcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28af00: 0x0  nop
    ctx->pc = 0x28af00u;
    // NOP
    // 0x28af04: 0x450000ee  bc1f        . + 4 + (0xEE << 2)
    ctx->pc = 0x28AF04u;
    {
        const bool branch_taken_0x28af04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28af04) {
            ctx->pc = 0x28B2C0u;
            return;
        }
    }
    ctx->pc = 0x28AF0Cu;
    // 0x28af0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28af10: 0x24676250  addiu       $a3, $v1, 0x6250
    ctx->pc = 0x28af10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25168));
    // 0x28af14: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x28af14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28af18: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x28af18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x396250u));
    // 0x28af1c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x28af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x28af20: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x28af24: 0x24c96260  addiu       $t1, $a2, 0x6260
    ctx->pc = 0x28af24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 25184));
    // 0x28af28: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x28af28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28af2c: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x28af2cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x396260u));
    // 0x28af30: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x28af30u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x28af34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af38: 0x8c232038  lw          $v1, 0x2038($at)
    ctx->pc = 0x28af38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622038u));
    // 0x28af3c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28AF3Cu;
    {
        const bool branch_taken_0x28af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28af3c) {
            ctx->pc = 0x28AF8Cu;
            return;
        }
    }
    ctx->pc = 0x28AF44u;
    // 0x28af44: 0x24027100  addiu       $v0, $zero, 0x7100
    ctx->pc = 0x28af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x28af48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28af48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28af4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28af4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28af50: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x28af50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28af54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28af54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28af58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28AF58u;
    SET_GPR_U32(ctx, 31, 0x28AF60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28AF58u, 0x28AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF60u;
label_28af60:
    // 0x28af60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28af60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28af64: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28AF64u;
    SET_GPR_U32(ctx, 31, 0x28AF6Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28AF64u, 0x28AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF6Cu;
label_28af6c:
    // 0x28af6c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x28af6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28af70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af74: 0xac282040  sw          $t0, 0x2040($at)
    ctx->pc = 0x28af74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x622040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622040u, _value); } while (0);
    // 0x28af78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af7c: 0x8c232038  lw          $v1, 0x2038($at)
    ctx->pc = 0x28af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622038u));
    // 0x28af80: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x28af80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28af84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28af84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28af88: 0xac262038  sw          $a2, 0x2038($at)
    ctx->pc = 0x28af88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
    ctx->pc = 0x28af8cu;
}
