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

// Function: caseD_3
// Address: 0x130060 - 0x130200
void caseD_3_0x130060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x130060");
#endif

    switch (ctx->pc) {
        case 0x13008cu: goto label_13008c;
        case 0x1300a8u: goto label_1300a8;
        case 0x1300c0u: goto label_1300c0;
        case 0x1300f4u: goto label_1300f4;
        case 0x13010cu: goto label_13010c;
        case 0x130118u: goto label_130118;
        case 0x13012cu: goto label_13012c;
        case 0x13013cu: goto label_13013c;
        case 0x130148u: goto label_130148;
        case 0x130154u: goto label_130154;
        case 0x130178u: goto label_130178;
        case 0x13018cu: goto label_13018c;
        case 0x1301d0u: goto label_1301d0;
        default: break;
    }

    ctx->pc = 0x130060u;

    // 0x130060: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x130064: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x130068: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x130068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13006c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130070: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x130070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130074: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130078: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x130078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x13007c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x13007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130080: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x130084: 0xc05c848  jal         func_172120
    ctx->pc = 0x130084u;
    SET_GPR_U32(ctx, 31, 0x13008Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x130084u, 0x13008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13008Cu;
label_13008c:
    // 0x13008c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x13008cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x130090: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130094: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x130094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130098: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x130098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13009c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x13009cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1300a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1300A0u;
    SET_GPR_U32(ctx, 31, 0x1300A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1300A0u, 0x1300A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A8u;
label_1300a8:
    // 0x1300a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1300a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300ac: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1300acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1300b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1300b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1300b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1300b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1300B8u;
    SET_GPR_U32(ctx, 31, 0x1300C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1300B8u, 0x1300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300C0u;
label_1300c0:
    // 0x1300c0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1300c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300c8: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x1300c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1300cc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1300ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1300d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1300d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1300d4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1300d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300dc: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1300dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1300e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1300e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1300e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1300e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1300e8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1300e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1300ec: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1300ECu;
    SET_GPR_U32(ctx, 31, 0x1300F4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1300ECu, 0x1300F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300F4u;
label_1300f4:
    // 0x1300f4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1300f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1300f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1300fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1300fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x130100: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x130100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x130104: 0xc040c9e  jal         func_103278
    ctx->pc = 0x130104u;
    SET_GPR_U32(ctx, 31, 0x13010Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13010Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13010Cu) { return; }
    ctx->pc = 0x13010Cu;
label_13010c:
    // 0x13010c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130110: 0xc05cd10  jal         func_173440
    ctx->pc = 0x130110u;
    SET_GPR_U32(ctx, 31, 0x130118u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x130110u, 0x130118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130118u;
label_130118:
    // 0x130118: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13011c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x130120: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x130124: 0xc040c9e  jal         func_103278
    ctx->pc = 0x130124u;
    SET_GPR_U32(ctx, 31, 0x13012Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13012Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13012Cu) { return; }
    ctx->pc = 0x13012Cu;
label_13012c:
    // 0x13012c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130134: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130134u;
    SET_GPR_U32(ctx, 31, 0x13013Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130134u, 0x13013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13013Cu;
label_13013c:
    // 0x13013c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130140: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x130140u;
    SET_GPR_U32(ctx, 31, 0x130148u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130140u, 0x130148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130148u;
label_130148:
    // 0x130148: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x130148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13014c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x13014Cu;
    SET_GPR_U32(ctx, 31, 0x130154u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x13014Cu, 0x130154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130154u;
label_130154:
    // 0x130154: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130158: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13015c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130160: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x130164: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x130164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130168: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x130168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x13016c: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x13016cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x130170: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x130170u;
    SET_GPR_U32(ctx, 31, 0x130178u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x130170u, 0x130178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130178u;
label_130178:
    // 0x130178: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x130178u;
    {
        const bool branch_taken_0x130178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130178) {
            ctx->pc = 0x130200u;
            return;
        }
    }
    ctx->pc = 0x130180u;
    // 0x130180: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x130180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130184: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x130184u;
    SET_GPR_U32(ctx, 31, 0x13018Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130184u, 0x13018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13018Cu;
label_13018c:
    // 0x13018c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x130190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130194: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x130194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x130198: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x130198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13019c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x13019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1301a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1301a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1301a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1301a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1301a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1301a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1301ac: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x1301acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x1301b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1301b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1301b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1301b8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1301bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1301bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1301c0: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x1301c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x1301c4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1301c4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1301c8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1301C8u;
    SET_GPR_U32(ctx, 31, 0x1301D0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1301C8u, 0x1301D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D0u;
label_1301d0:
    // 0x1301d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1301d4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1301d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1301d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1301d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1301dc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1301dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1301e0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1301e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1301e4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1301e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1301e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1301e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1301ec: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1301ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x1301f0: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x1301f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1301f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1301f8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1301F8u;
    SET_GPR_U32(ctx, 31, 0x130200u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1301F8u, 0x130200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130200u;
}
