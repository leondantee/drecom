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

// Function: entry_00239edc
// Address: 0x239edc - 0x239f8c
void entry_00239edc_0x239edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239edc_0x239edc");
#endif

    switch (ctx->pc) {
        case 0x239f08u: goto label_239f08;
        case 0x239f24u: goto label_239f24;
        case 0x239f3cu: goto label_239f3c;
        case 0x239f48u: goto label_239f48;
        case 0x239f78u: goto label_239f78;
        default: break;
    }

    ctx->pc = 0x239edcu;

    // 0x239edc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ee0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ee4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ee8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x239ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239eec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239ef0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x239ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239ef4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239ef8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239efc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239f00: 0xc05c848  jal         func_172120
    ctx->pc = 0x239F00u;
    SET_GPR_U32(ctx, 31, 0x239F08u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239F00u, 0x239F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F08u;
label_239f08:
    // 0x239f08: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239f0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f10: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239f14: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239f18: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239f18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239f1c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239F1Cu;
    SET_GPR_U32(ctx, 31, 0x239F24u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239F1Cu, 0x239F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F24u;
label_239f24:
    // 0x239f24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x239f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239f2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239f34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239F34u;
    SET_GPR_U32(ctx, 31, 0x239F3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239F34u, 0x239F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F3Cu;
label_239f3c:
    // 0x239f3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239F40u;
    SET_GPR_U32(ctx, 31, 0x239F48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239F40u, 0x239F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F48u;
label_239f48:
    // 0x239f48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239f50: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x239F50u;
    {
        const bool branch_taken_0x239f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f50) {
            ctx->pc = 0x239FDCu;
            return;
        }
    }
    ctx->pc = 0x239F58u;
    // 0x239f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239f64: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x239f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x239f68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239f70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239F70u;
    SET_GPR_U32(ctx, 31, 0x239F78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239F70u, 0x239F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239f7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f80: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x239f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239f84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x239F84u;
    {
        const bool branch_taken_0x239f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f84) {
            ctx->pc = 0x239FDCu;
            return;
        }
    }
    ctx->pc = 0x239F8Cu;
}
