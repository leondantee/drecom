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

// Function: entry_0020d0ac
// Address: 0x20d0ac - 0x20d190
void entry_0020d0ac_0x20d0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d0ac_0x20d0ac");
#endif

    switch (ctx->pc) {
        case 0x20d0d0u: goto label_20d0d0;
        case 0x20d0e8u: goto label_20d0e8;
        case 0x20d0fcu: goto label_20d0fc;
        case 0x20d110u: goto label_20d110;
        case 0x20d11cu: goto label_20d11c;
        case 0x20d148u: goto label_20d148;
        default: break;
    }

    ctx->pc = 0x20d0acu;

    // 0x20d0ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0b4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20d0b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20d0bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20d0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20d0c0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x20d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20d0c4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x20d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20d0c8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20D0C8u;
    SET_GPR_U32(ctx, 31, 0x20D0D0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20D0C8u, 0x20D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0D0u;
label_20d0d0:
    // 0x20d0d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20d0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20d0d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d0dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d0e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D0E0u;
    SET_GPR_U32(ctx, 31, 0x20D0E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D0E0u, 0x20D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0E8u;
label_20d0e8:
    // 0x20d0e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0f0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20d0f4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20D0F4u;
    SET_GPR_U32(ctx, 31, 0x20D0FCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20D0F4u, 0x20D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0FCu;
label_20d0fc:
    // 0x20d0fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20d0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d100: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d108: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20D108u;
    SET_GPR_U32(ctx, 31, 0x20D110u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20D108u, 0x20D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D110u;
label_20d110:
    // 0x20d110: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d114: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D114u;
    SET_GPR_U32(ctx, 31, 0x20D11Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D114u, 0x20D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D11Cu;
label_20d11c:
    // 0x20d11c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d120: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d124: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x20D124u;
    {
        const bool branch_taken_0x20d124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d124) {
            ctx->pc = 0x20D20Cu;
            return;
        }
    }
    ctx->pc = 0x20D12Cu;
    // 0x20d12c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d130: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20d134: 0x2406050a  addiu       $a2, $zero, 0x50A
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x20d138: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20d138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20d13c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d140: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D140u;
    SET_GPR_U32(ctx, 31, 0x20D148u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D140u, 0x20D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D148u;
label_20d148:
    // 0x20d148: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d14c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20d14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20d150: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d154: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20d154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d15c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d160: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d164: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20d168: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20d16c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x20d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20d170: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20d170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20d174: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x20d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x20d178: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x20d178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x20d17c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d184: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x20d184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x20d188: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20D188u;
    {
        const bool branch_taken_0x20d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d188) {
            ctx->pc = 0x20D20Cu;
            return;
        }
    }
    ctx->pc = 0x20D190u;
}
