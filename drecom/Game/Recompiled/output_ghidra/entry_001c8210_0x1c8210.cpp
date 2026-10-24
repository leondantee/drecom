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

// Function: entry_001c8210
// Address: 0x1c8210 - 0x1c82c4
void entry_001c8210_0x1c8210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8210_0x1c8210");
#endif

    switch (ctx->pc) {
        case 0x1c821cu: goto label_1c821c;
        case 0x1c8234u: goto label_1c8234;
        case 0x1c8244u: goto label_1c8244;
        case 0x1c82c0u: goto label_1c82c0;
        default: break;
    }

    ctx->pc = 0x1c8210u;

    // 0x1c8210: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8214: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C8214u;
    SET_GPR_U32(ctx, 31, 0x1C821Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C8214u, 0x1C821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C821Cu;
label_1c821c:
    // 0x1c821c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c821cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8224: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c822c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C822Cu;
    SET_GPR_U32(ctx, 31, 0x1C8234u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C822Cu, 0x1C8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8234u;
label_1c8234:
    // 0x1c8234: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c8234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8238: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c823c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C823Cu;
    SET_GPR_U32(ctx, 31, 0x1C8244u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C823Cu, 0x1C8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8244u;
label_1c8244:
    // 0x1c8244: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8248: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c824c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c824cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c8250: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C8250u;
    {
        const bool branch_taken_0x1c8250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8250) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C8258u;
    // 0x1c8258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c825c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c8260: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c8260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c8264: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1c8264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c8268: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C8268u;
    {
        const bool branch_taken_0x1c8268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8268) {
            ctx->pc = 0x1C832Cu;
            return;
        }
    }
    ctx->pc = 0x1C8270u;
    // 0x1c8270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8274: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8278: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1c8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
    // 0x1c827c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8280: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8284: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8288: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c8288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1c828c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c828cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8290: 0xc4c01568  lwc1        $f0, 0x1568($a2)
    ctx->pc = 0x1c8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8298: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1c829c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82a0: 0xa4a01574  sh          $zero, 0x1574($a1)
    ctx->pc = 0x1c82a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c82a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82a8: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c82a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c82ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C82ACu;
    {
        const bool branch_taken_0x1c82ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82ac) {
            ctx->pc = 0x1C82C4u;
            return;
        }
    }
    ctx->pc = 0x1C82B4u;
    // 0x1c82b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82b8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C82B8u;
    SET_GPR_U32(ctx, 31, 0x1C82C0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C82B8u, 0x1C82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C0u;
label_1c82c0:
    // 0x1c82c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c82c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c82c4u;
}
