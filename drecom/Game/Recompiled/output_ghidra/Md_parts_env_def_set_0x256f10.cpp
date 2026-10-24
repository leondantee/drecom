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

// Function: Md_parts_env_def_set
// Address: 0x256f10 - 0x2570b8
void Md_parts_env_def_set_0x256f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_def_set_0x256f10");
#endif

    switch (ctx->pc) {
        case 0x256ff4u: goto label_256ff4;
        case 0x25704cu: goto label_25704c;
        default: break;
    }

    ctx->pc = 0x256f10u;

    // 0x256f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256f14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x256f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x256f18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x256f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x256f1c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x256f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x256f20: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256f24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256f28: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x256f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x256f2c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x256f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x256f34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x256f38: 0x24030eee  addiu       $v1, $zero, 0xEEE
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x256f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f40: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x256f40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x256f44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x256f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256f48: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x256f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256f4c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x256F4Cu;
    {
        const bool branch_taken_0x256f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f4c) {
            ctx->pc = 0x256FFCu;
            goto label_256ffc;
        }
    }
    ctx->pc = 0x256F54u;
    // 0x256f54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x256f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256f58: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x256f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256f5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x256f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256f60: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256F60u;
    {
        const bool branch_taken_0x256f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256f60) {
            ctx->pc = 0x256F7Cu;
            goto label_256f7c;
        }
    }
    ctx->pc = 0x256F68u;
    // 0x256f68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x256f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256f6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256F6Cu;
    {
        const bool branch_taken_0x256f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256f6c) {
            ctx->pc = 0x256F7Cu;
            goto label_256f7c;
        }
    }
    ctx->pc = 0x256F74u;
    // 0x256f74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x256F74u;
    {
        const bool branch_taken_0x256f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f74) {
            ctx->pc = 0x256F94u;
            goto label_256f94;
        }
    }
    ctx->pc = 0x256F7Cu;
label_256f7c:
    // 0x256f7c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x256f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x256f80: 0x3443180f  ori         $v1, $v0, 0x180F
    ctx->pc = 0x256f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x256f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f88: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x256f88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x256f8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x256F8Cu;
    {
        const bool branch_taken_0x256f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f8c) {
            ctx->pc = 0x256FD0u;
            goto label_256fd0;
        }
    }
    ctx->pc = 0x256F94u;
label_256f94:
    // 0x256f94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x256f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256f98: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x256f9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x256f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x256fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256FA0u;
    {
        const bool branch_taken_0x256fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fa0) {
            ctx->pc = 0x256FC0u;
            goto label_256fc0;
        }
    }
    ctx->pc = 0x256FA8u;
    // 0x256fa8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x256fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x256fac: 0x34431001  ori         $v1, $v0, 0x1001
    ctx->pc = 0x256facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x256fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256fb4: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x256fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x256fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x256FB8u;
    {
        const bool branch_taken_0x256fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fb8) {
            ctx->pc = 0x256FD0u;
            goto label_256fd0;
        }
    }
    ctx->pc = 0x256FC0u;
label_256fc0:
    // 0x256fc0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x256fc4: 0x3443010d  ori         $v1, $v0, 0x10D
    ctx->pc = 0x256fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x256fc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256fcc: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x256fccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
label_256fd0:
    // 0x256fd0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x256fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x256fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256fd8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x256fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256fdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256fe0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x256fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x256fe4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x256fe4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x256fe8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x256fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x256fec: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x256FECu;
    SET_GPR_U32(ctx, 31, 0x256FF4u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x256FECu, 0x256FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FF4u;
label_256ff4:
    // 0x256ff4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x256FF4u;
    {
        const bool branch_taken_0x256ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ff4) {
            ctx->pc = 0x25704Cu;
            goto label_25704c;
        }
    }
    ctx->pc = 0x256FFCu;
label_256ffc:
    // 0x256ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x256ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257000: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x257000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x257004: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x257004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x257008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257008u;
    {
        const bool branch_taken_0x257008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257008) {
            ctx->pc = 0x257028u;
            goto label_257028;
        }
    }
    ctx->pc = 0x257010u;
    // 0x257010: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x257010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x257014: 0x3443080b  ori         $v1, $v0, 0x80B
    ctx->pc = 0x257014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x257018: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25701c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x25701cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x257020: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257020u;
    {
        const bool branch_taken_0x257020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257020) {
            ctx->pc = 0x257038u;
            goto label_257038;
        }
    }
    ctx->pc = 0x257028u;
label_257028:
    // 0x257028: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x25702c: 0x3443010d  ori         $v1, $v0, 0x10D
    ctx->pc = 0x25702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x257030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257034: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x257034u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
label_257038:
    // 0x257038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25703c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x25703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x257040: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x257040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x257044: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x257044u;
    SET_GPR_U32(ctx, 31, 0x25704Cu);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x257044u, 0x25704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25704Cu;
label_25704c:
    // 0x25704c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x25704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x257050: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257054: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x257054u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x257058: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x257058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x25705c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257060: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x257060u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x257064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x257064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257068: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x257068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x25706c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25706Cu;
    {
        const bool branch_taken_0x25706c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25706c) {
            ctx->pc = 0x25708Cu;
            goto label_25708c;
        }
    }
    ctx->pc = 0x257074u;
    // 0x257074: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x257078: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x257078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x25707c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257080: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x257080u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x257084: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257084u;
    {
        const bool branch_taken_0x257084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257084) {
            ctx->pc = 0x25709Cu;
            goto label_25709c;
        }
    }
    ctx->pc = 0x25708Cu;
label_25708c:
    // 0x25708c: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x257090: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x257090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x257094: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257098: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x257098u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
label_25709c:
    // 0x25709c: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x25709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2570a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2570a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2570a4: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x2570a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x2570a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2570a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2570ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2570acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2570b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2570B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2570B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2570B8u;
}
