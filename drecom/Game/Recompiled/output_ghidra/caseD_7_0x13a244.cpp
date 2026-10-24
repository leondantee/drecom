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

// Function: caseD_7
// Address: 0x13a244 - 0x13a2d0
void caseD_7_0x13a244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x13a244");
#endif

    switch (ctx->pc) {
        case 0x13a254u: goto label_13a254;
        case 0x13a260u: goto label_13a260;
        case 0x13a274u: goto label_13a274;
        case 0x13a280u: goto label_13a280;
        default: break;
    }

    ctx->pc = 0x13a244u;

    // 0x13a244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a248: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a24c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13A24Cu;
    SET_GPR_U32(ctx, 31, 0x13A254u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A24Cu, 0x13A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A254u;
label_13a254:
    // 0x13a254: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a258: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13A258u;
    SET_GPR_U32(ctx, 31, 0x13A260u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A258u, 0x13A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A260u;
label_13a260:
    // 0x13a260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13a264: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a26c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13A26Cu;
    SET_GPR_U32(ctx, 31, 0x13A274u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A26Cu, 0x13A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A274u;
label_13a274:
    // 0x13a274: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a278: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13A278u;
    SET_GPR_U32(ctx, 31, 0x13A280u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A278u, 0x13A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A280u;
label_13a280:
    // 0x13a280: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a284: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13a284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13a288: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13A288u;
    {
        const bool branch_taken_0x13a288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a288) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A290u;
    // 0x13a290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a298: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13a298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a29c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x13a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a2a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13a2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a2ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a2b4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x13a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13a2b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2bc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x13a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13a2c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2c4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x13a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a2c8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13A2C8u;
    {
        const bool branch_taken_0x13a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a2c8) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A2D0u;
}
