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

// Function: entry_00197fdc
// Address: 0x197fdc - 0x198074
void entry_00197fdc_0x197fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197fdc_0x197fdc");
#endif

    switch (ctx->pc) {
        case 0x197fecu: goto label_197fec;
        case 0x19800cu: goto label_19800c;
        case 0x198018u: goto label_198018;
        case 0x198028u: goto label_198028;
        case 0x198034u: goto label_198034;
        default: break;
    }

    ctx->pc = 0x197fdcu;

    // 0x197fdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x197fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197fe4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x197FE4u;
    SET_GPR_U32(ctx, 31, 0x197FECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x197FE4u, 0x197FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FECu;
label_197fec:
    // 0x197fec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197ff0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x197ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197ff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197ff8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x197ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x197ffc: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x197ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x198000: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x198000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198004: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x198004u;
    SET_GPR_U32(ctx, 31, 0x19800Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19800Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19800Cu) { return; }
    ctx->pc = 0x19800Cu;
label_19800c:
    // 0x19800c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198010: 0xc05cd10  jal         func_173440
    ctx->pc = 0x198010u;
    SET_GPR_U32(ctx, 31, 0x198018u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x198010u, 0x198018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198018u;
label_198018:
    // 0x198018: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19801c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19801cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x198020: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x198020u;
    SET_GPR_U32(ctx, 31, 0x198028u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x198020u, 0x198028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198028u;
label_198028:
    // 0x198028: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19802c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19802Cu;
    SET_GPR_U32(ctx, 31, 0x198034u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19802Cu, 0x198034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198034u;
label_198034:
    // 0x198034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198038: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x198038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19803c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19803Cu;
    {
        const bool branch_taken_0x19803c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19803c) {
            ctx->pc = 0x198074u;
            return;
        }
    }
    ctx->pc = 0x198044u;
    // 0x198044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19804c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19804cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198058: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19805c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198060: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198068: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19806c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198070: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x198074u;
}
