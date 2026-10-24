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

// Function: Pl_em_dam_em05_atk_osae
// Address: 0x20d000 - 0x20d224
void Pl_em_dam_em05_atk_osae_0x20d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em05_atk_osae_0x20d000");
#endif

    switch (ctx->pc) {
        case 0x20d080u: goto label_20d080;
        case 0x20d094u: goto label_20d094;
        case 0x20d0d0u: goto label_20d0d0;
        case 0x20d0e8u: goto label_20d0e8;
        case 0x20d0fcu: goto label_20d0fc;
        case 0x20d110u: goto label_20d110;
        case 0x20d11cu: goto label_20d11c;
        case 0x20d148u: goto label_20d148;
        case 0x20d1a0u: goto label_20d1a0;
        case 0x20d1acu: goto label_20d1ac;
        case 0x20d1b8u: goto label_20d1b8;
        case 0x20d1ccu: goto label_20d1cc;
        default: break;
    }

    ctx->pc = 0x20d000u;

    // 0x20d000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d004: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x20d004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20d008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d010: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x20d010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x20d014: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x20d014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x20d018: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x20d018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x20d01c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d020: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x20d024: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d028: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20d028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d02c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20d02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20d030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d034: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x20D034u;
    {
        const bool branch_taken_0x20d034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d034) {
            ctx->pc = 0x20D190u;
            goto label_20d190;
        }
    }
    ctx->pc = 0x20D03Cu;
    // 0x20d03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d040: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20D040u;
    {
        const bool branch_taken_0x20d040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d040) {
            ctx->pc = 0x20D0ACu;
            goto label_20d0ac;
        }
    }
    ctx->pc = 0x20D048u;
    // 0x20d048: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D048u;
    {
        const bool branch_taken_0x20d048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d048) {
            ctx->pc = 0x20D058u;
            goto label_20d058;
        }
    }
    ctx->pc = 0x20D050u;
    // 0x20d050: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x20D050u;
    {
        const bool branch_taken_0x20d050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d050) {
            ctx->pc = 0x20D20Cu;
            goto label_20d20c;
        }
    }
    ctx->pc = 0x20D058u;
label_20d058:
    // 0x20d058: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20d05c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d060: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20d060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d064: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d068: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20d068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20d06c: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x20d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x20d070: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20d070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20d074: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d078: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D078u, 0x20D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D080u;
label_20d080:
    // 0x20d080: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d084: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20d088: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20d08c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x20D08Cu;
    SET_GPR_U32(ctx, 31, 0x20D094u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x20D08Cu, 0x20D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D094u;
label_20d094:
    // 0x20d094: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d098: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20d098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20d09c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d0a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20d0ac:
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
            goto label_20d20c;
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
            goto label_20d20c;
        }
    }
    ctx->pc = 0x20D190u;
label_20d190:
    // 0x20d190: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d198: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D198u;
    SET_GPR_U32(ctx, 31, 0x20D1A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D198u, 0x20D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1A0u;
label_20d1a0:
    // 0x20d1a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20D1A4u;
    SET_GPR_U32(ctx, 31, 0x20D1ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20D1A4u, 0x20D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1ACu;
label_20d1ac:
    // 0x20d1ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D1B0u;
    SET_GPR_U32(ctx, 31, 0x20D1B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D1B0u, 0x20D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1B8u;
label_20d1b8:
    // 0x20d1b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20d1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d1bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d1c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20D1C4u;
    SET_GPR_U32(ctx, 31, 0x20D1CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20D1C4u, 0x20D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1CCu;
label_20d1cc:
    // 0x20d1cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d1d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20D1D4u;
    {
        const bool branch_taken_0x20d1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d1d4) {
            ctx->pc = 0x20D20Cu;
            goto label_20d20c;
        }
    }
    ctx->pc = 0x20D1DCu;
    // 0x20d1dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d1e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d1e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d1f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d1fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d200: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d204: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d208: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20d208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_20d20c:
    // 0x20d20c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x20d20cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d218: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D224u;
}
