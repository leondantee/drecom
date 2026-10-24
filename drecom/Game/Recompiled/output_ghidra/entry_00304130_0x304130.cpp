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

// Function: entry_00304130
// Address: 0x304130 - 0x3041b4
void entry_00304130_0x304130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304130_0x304130");
#endif

    switch (ctx->pc) {
        case 0x304140u: goto label_304140;
        case 0x30414cu: goto label_30414c;
        case 0x3041a4u: goto label_3041a4;
        default: break;
    }

    ctx->pc = 0x304130u;

    // 0x304130: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304134: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x304134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x304138: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304138u;
    SET_GPR_U32(ctx, 31, 0x304140u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304138u, 0x304140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304140u;
label_304140:
    // 0x304140: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304144: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304144u;
    SET_GPR_U32(ctx, 31, 0x30414Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304144u, 0x30414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30414Cu;
label_30414c:
    // 0x30414c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304150: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304154: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x304154u;
    {
        const bool branch_taken_0x304154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304154) {
            ctx->pc = 0x3041B4u;
            return;
        }
    }
    ctx->pc = 0x30415Cu;
    // 0x30415c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304164: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x304164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x304168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30416c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304170: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x304170u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x304174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304178: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x304178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30417c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304180: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x304180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304188: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x304188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x30418c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304194: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x304194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x304198: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x30419c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x30419Cu;
    SET_GPR_U32(ctx, 31, 0x3041A4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x30419Cu, 0x3041A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041A4u;
label_3041a4:
    // 0x3041a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3041a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3041a8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x3041a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x3041ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3041b0: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x3041b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    ctx->pc = 0x3041b4u;
}
