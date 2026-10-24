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

// Function: caseD_5
// Address: 0x309e54 - 0x309ef4
void caseD_5_0x309e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x309e54");
#endif

    switch (ctx->pc) {
        case 0x309e98u: goto label_309e98;
        case 0x309ea8u: goto label_309ea8;
        case 0x309eb4u: goto label_309eb4;
        default: break;
    }

    ctx->pc = 0x309e54u;

    // 0x309e54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e58: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x309e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309e5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e60: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x309e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309e64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x309e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x309e68: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x309e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x309e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e70: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x309e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309e74: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x309e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x309e78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x309e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x309e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309e80: 0x0  nop
    ctx->pc = 0x309e80u;
    // NOP
    // 0x309e84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309e88: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x309e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x309e8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309E90u;
    SET_GPR_U32(ctx, 31, 0x309E98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309E90u, 0x309E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E98u;
label_309e98:
    // 0x309e98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309ea0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309EA0u;
    SET_GPR_U32(ctx, 31, 0x309EA8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309EA0u, 0x309EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EA8u;
label_309ea8:
    // 0x309ea8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309eac: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309EACu;
    SET_GPR_U32(ctx, 31, 0x309EB4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309EACu, 0x309EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EB4u;
label_309eb4:
    // 0x309eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309eb8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x309ebc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x309EBCu;
    {
        const bool branch_taken_0x309ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ebc) {
            ctx->pc = 0x309EF4u;
            return;
        }
    }
    ctx->pc = 0x309EC4u;
    // 0x309ec4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ecc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309ed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ed8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309edc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ee0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309ee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ee8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309eec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ef0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x309ef4u;
}
