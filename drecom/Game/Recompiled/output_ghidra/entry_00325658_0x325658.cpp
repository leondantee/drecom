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

// Function: entry_00325658
// Address: 0x325658 - 0x32577c
void entry_00325658_0x325658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325658_0x325658");
#endif

    switch (ctx->pc) {
        case 0x325660u: goto label_325660;
        case 0x32567cu: goto label_32567c;
        case 0x3256fcu: goto label_3256fc;
        case 0x325730u: goto label_325730;
        default: break;
    }

    ctx->pc = 0x325658u;

    // 0x325658: 0xc067654  jal         func_19D950
    ctx->pc = 0x325658u;
    SET_GPR_U32(ctx, 31, 0x325660u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x325658u, 0x325660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325660u;
label_325660:
    // 0x325660: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x325664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325668: 0x0  nop
    ctx->pc = 0x325668u;
    // NOP
    // 0x32566c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32566cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325670: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x325670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x325674: 0xc067648  jal         func_19D920
    ctx->pc = 0x325674u;
    SET_GPR_U32(ctx, 31, 0x32567Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325674u, 0x32567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32567Cu;
label_32567c:
    // 0x32567c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325684: 0x0  nop
    ctx->pc = 0x325684u;
    // NOP
    // 0x325688: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32568c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x32568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x325690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x325690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x325694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325698: 0x0  nop
    ctx->pc = 0x325698u;
    // NOP
    // 0x32569c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32569cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3256a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3256a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3256a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3256a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3256a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3256ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3256acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3256b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3256b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3256b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3256b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3256b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3256b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3256bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3256bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3256c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3256c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3256c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3256c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3256cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3256ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3256d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3256d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3256d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3256d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3256dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3256dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3256e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3256e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3256e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3256e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3256e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3256e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3256ec: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3256ECu;
    {
        const bool branch_taken_0x3256ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3256ec) {
            ctx->pc = 0x3257E4u;
            return;
        }
    }
    ctx->pc = 0x3256F4u;
    // 0x3256f4: 0xc067654  jal         func_19D950
    ctx->pc = 0x3256F4u;
    SET_GPR_U32(ctx, 31, 0x3256FCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3256F4u, 0x3256FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3256FCu;
label_3256fc:
    // 0x3256fc: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3256fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x325700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325704: 0x0  nop
    ctx->pc = 0x325704u;
    // NOP
    // 0x325708: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x325708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32570c: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x32570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x325710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325714: 0x0  nop
    ctx->pc = 0x325714u;
    // NOP
    // 0x325718: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x325718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32571c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32571cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x325720: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x325720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325724: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x325724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x325728: 0xc067648  jal         func_19D920
    ctx->pc = 0x325728u;
    SET_GPR_U32(ctx, 31, 0x325730u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325728u, 0x325730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325730u;
label_325730:
    // 0x325730: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x325734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325738: 0x0  nop
    ctx->pc = 0x325738u;
    // NOP
    // 0x32573c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32573cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325740: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x325740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x325744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325748: 0x0  nop
    ctx->pc = 0x325748u;
    // NOP
    // 0x32574c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x32574cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x325750: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x325750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x325754: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x325754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x325758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32575c: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x32575cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x325760: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325760u;
    {
        const bool branch_taken_0x325760 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x325760) {
            ctx->pc = 0x32577Cu;
            return;
        }
    }
    ctx->pc = 0x325768u;
    // 0x325768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32576c: 0x0  nop
    ctx->pc = 0x32576cu;
    // NOP
    // 0x325770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325774u;
    {
        const bool branch_taken_0x325774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325774) {
            ctx->pc = 0x325798u;
            return;
        }
    }
    ctx->pc = 0x32577Cu;
}
