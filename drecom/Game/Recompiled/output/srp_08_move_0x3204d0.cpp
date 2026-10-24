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

// Function: srp_08_move
// Address: 0x3204d0 - 0x320eb8
void srp_08_move_0x3204d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_08_move_0x3204d0");
#endif

    switch (ctx->pc) {
        case 0x320518u: goto label_320518;
        case 0x32054cu: goto label_32054c;
        case 0x3205a8u: goto label_3205a8;
        case 0x3205c8u: goto label_3205c8;
        case 0x320610u: goto label_320610;
        case 0x320664u: goto label_320664;
        case 0x320684u: goto label_320684;
        case 0x3206acu: goto label_3206ac;
        case 0x3206e0u: goto label_3206e0;
        case 0x32073cu: goto label_32073c;
        case 0x32076cu: goto label_32076c;
        case 0x320940u: goto label_320940;
        case 0x320a3cu: goto label_320a3c;
        case 0x320b00u: goto label_320b00;
        case 0x320cacu: goto label_320cac;
        case 0x320dccu: goto label_320dcc;
        case 0x320dd4u: goto label_320dd4;
        case 0x320e10u: goto label_320e10;
        case 0x320e4cu: goto label_320e4c;
        default: break;
    }

    ctx->pc = 0x3204d0u;

    // 0x3204d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3204d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3204d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3204d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3204d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3204d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3204dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3204dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3204e0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x3204e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x3204e4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3204e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3204e8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x3204e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3204ec: 0x96030340  lhu         $v1, 0x340($s0)
    ctx->pc = 0x3204ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x3204f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3204f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3204f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3204f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3204f8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3204F8u;
    {
        const bool branch_taken_0x3204f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3204f8) {
            ctx->pc = 0x320578u;
            goto label_320578;
        }
    }
    ctx->pc = 0x320500u;
    // 0x320500: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320504: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320508: 0x248403c0  addiu       $a0, $a0, 0x3C0
    ctx->pc = 0x320508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x32050c: 0x8c650324  lw          $a1, 0x324($v1)
    ctx->pc = 0x32050cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x320510: 0xc040ca2  jal         func_103288
    ctx->pc = 0x320510u;
    SET_GPR_U32(ctx, 31, 0x320518u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x320518u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x320518u) { return; }
    ctx->pc = 0x320518u;
label_320518:
    // 0x320518: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x320518u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32051c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320520: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x320520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x320524: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320528: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32052c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320530: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x320530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320534: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320538: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32053c: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x32053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x320540: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x320540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x320544: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x320544u;
    SET_GPR_U32(ctx, 31, 0x32054Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x32054Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32054Cu) { return; }
    ctx->pc = 0x32054Cu;
label_32054c:
    // 0x32054c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32054cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320550: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x320554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32055c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x32055cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320560: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x320560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x320564: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x320564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320568: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32056c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x320570: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x320570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x320574: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x320574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320578:
    // 0x320578: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32057c: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x32057cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x320580: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x320580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x320584: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x320584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x320588: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x320588u;
    {
        const bool branch_taken_0x320588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x320588) {
            ctx->pc = 0x3205E0u;
            goto label_3205e0;
        }
    }
    ctx->pc = 0x320590u;
    // 0x320590: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320594: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320598: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x320598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x32059c: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x3205a0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3205A0u;
    SET_GPR_U32(ctx, 31, 0x3205A8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3205A8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3205A8u) { return; }
    ctx->pc = 0x3205A8u;
label_3205a8:
    // 0x3205a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3205a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3205ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3205acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3205b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3205b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205b8: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x3205b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x3205bc: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3205c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3205C0u;
    SET_GPR_U32(ctx, 31, 0x3205C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3205C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3205C8u) { return; }
    ctx->pc = 0x3205C8u;
label_3205c8:
    // 0x3205c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3205c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3205cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3205d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3205d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3205d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205d8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3205d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3205dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3205dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3205e0:
    // 0x3205e0: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x3205E0u;
    {
        const bool branch_taken_0x3205e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205e0) {
            ctx->pc = 0x3207C0u;
            goto label_3207c0;
        }
    }
    ctx->pc = 0x3205E8u;
    // 0x3205e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3205e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205ec: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x3205ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3205f0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3205f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3205f4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3205f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3205f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3205f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3205fc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3205fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320600: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x320600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320604: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x320604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320608: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x320608u;
    SET_GPR_U32(ctx, 31, 0x320610u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x320608u, 0x320610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320610u;
label_320610:
    // 0x320610: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x320610u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320614: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320618: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x320618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x32061c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32061Cu;
    {
        const bool branch_taken_0x32061c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x32061c) {
            ctx->pc = 0x320638u;
            goto label_320638;
        }
    }
    ctx->pc = 0x320624u;
    // 0x320624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320628: 0x0  nop
    ctx->pc = 0x320628u;
    // NOP
    // 0x32062c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x32062cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320630u;
    {
        const bool branch_taken_0x320630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320630) {
            ctx->pc = 0x320654u;
            goto label_320654;
        }
    }
    ctx->pc = 0x320638u;
label_320638:
    // 0x320638: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x320638u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x32063c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x320640: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x320640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x320644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x320644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320648: 0x0  nop
    ctx->pc = 0x320648u;
    // NOP
    // 0x32064c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x32064cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320650: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x320650u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_320654:
    // 0x320654: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x320654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320658: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x320658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32065c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x32065Cu;
    SET_GPR_U32(ctx, 31, 0x320664u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x320664u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x320664u) { return; }
    ctx->pc = 0x320664u;
label_320664:
    // 0x320664: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x320664u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320668: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32066c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32066cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320670: 0x0  nop
    ctx->pc = 0x320670u;
    // NOP
    // 0x320674: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x320674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x320678: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32067c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x32067Cu;
    {
        const bool branch_taken_0x32067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32067c) {
            ctx->pc = 0x320748u;
            goto label_320748;
        }
    }
    ctx->pc = 0x320684u;
label_320684:
    // 0x320684: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32068c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x32068cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320690: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x320694: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x320694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320698: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32069c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x32069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3206a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3206a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3206a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3206A4u;
    SET_GPR_U32(ctx, 31, 0x3206ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3206A4u, 0x3206ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206ACu;
label_3206ac:
    // 0x3206ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3206acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3206b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206b4: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x3206b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x3206b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3206b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3206bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3206c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3206c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3206c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3206c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3206c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3206cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206d0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3206d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3206d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3206d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3206d8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3206D8u;
    SET_GPR_U32(ctx, 31, 0x3206E0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3206D8u, 0x3206E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206E0u;
label_3206e0:
    // 0x3206e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3206e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3206e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3206e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206e8: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3206e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3206ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3206ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3206f0: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x3206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3206f4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3206F4u;
    {
        const bool branch_taken_0x3206f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3206f4) {
            ctx->pc = 0x320710u;
            goto label_320710;
        }
    }
    ctx->pc = 0x3206FCu;
    // 0x3206fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3206fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320700: 0x0  nop
    ctx->pc = 0x320700u;
    // NOP
    // 0x320704: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x320704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320708u;
    {
        const bool branch_taken_0x320708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320708) {
            ctx->pc = 0x32072Cu;
            goto label_32072c;
        }
    }
    ctx->pc = 0x320710u;
label_320710:
    // 0x320710: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x320710u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x320714: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x320714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x320718: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x320718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x32071c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32071cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320720: 0x0  nop
    ctx->pc = 0x320720u;
    // NOP
    // 0x320724: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x320724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320728: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x320728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_32072c:
    // 0x32072c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x32072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320730: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x320730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320734: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x320734u;
    SET_GPR_U32(ctx, 31, 0x32073Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x32073Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32073Cu) { return; }
    ctx->pc = 0x32073Cu;
label_32073c:
    // 0x32073c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32073cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320744: 0x0  nop
    ctx->pc = 0x320744u;
    // NOP
label_320748:
    // 0x320748: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32074c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x32074cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320754: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x320754u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x320758: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x320758u;
    {
        const bool branch_taken_0x320758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320758) {
            ctx->pc = 0x320684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320684;
        }
    }
    ctx->pc = 0x320760u;
    // 0x320760: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320764: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x320764u;
    {
        const bool branch_taken_0x320764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320764) {
            ctx->pc = 0x3207A8u;
            goto label_3207a8;
        }
    }
    ctx->pc = 0x32076Cu;
label_32076c:
    // 0x32076c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320770: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x320774: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320778: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x320778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32077c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x32077cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x320780: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320788: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320788u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32078c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32078cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320790: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320798: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x32079c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x32079cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3207a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3207a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3207a4: 0x0  nop
    ctx->pc = 0x3207a4u;
    // NOP
label_3207a8:
    // 0x3207a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207ac: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x3207acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3207b0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3207b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3207b4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3207b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3207b8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3207B8u;
    {
        const bool branch_taken_0x3207b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207b8) {
            ctx->pc = 0x32076Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32076c;
        }
    }
    ctx->pc = 0x3207C0u;
label_3207c0:
    // 0x3207c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207c4: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x3207c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x3207c8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3207c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3207cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207d0: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x3207d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3207d4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3207d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3207d8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3207d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3207dc: 0x102000e2  beqz        $at, . + 4 + (0xE2 << 2)
    ctx->pc = 0x3207DCu;
    {
        const bool branch_taken_0x3207dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207dc) {
            ctx->pc = 0x320B68u;
            goto label_320b68;
        }
    }
    ctx->pc = 0x3207E4u;
    // 0x3207e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207e8: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x3207e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x3207ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3207ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3207f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3207f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3207f4: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x3207F4u;
    {
        const bool branch_taken_0x3207f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3207f4) {
            ctx->pc = 0x320AB4u;
            goto label_320ab4;
        }
    }
    ctx->pc = 0x3207FCu;
    // 0x3207fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3207fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320800: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x320800u;
    {
        const bool branch_taken_0x320800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x320800) {
            ctx->pc = 0x3208CCu;
            goto label_3208cc;
        }
    }
    ctx->pc = 0x320808u;
    // 0x320808: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320808u;
    {
        const bool branch_taken_0x320808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x320808) {
            ctx->pc = 0x320818u;
            goto label_320818;
        }
    }
    ctx->pc = 0x320810u;
    // 0x320810: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x320810u;
    {
        const bool branch_taken_0x320810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320810) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320818u;
label_320818:
    // 0x320818: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32081c: 0x90a40346  lbu         $a0, 0x346($a1)
    ctx->pc = 0x32081cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x320820: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x320820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x320824: 0xa0a30346  sb          $v1, 0x346($a1)
    ctx->pc = 0x320824u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x320828: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32082c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x32082cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320834: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x320834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320838: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32083c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x32083cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320840: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x320840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320844: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x320844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x320848: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x320848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x32084c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32084cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320854: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320858: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32085c: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x32085cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320860: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320864: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320868: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32086c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x320870: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320870u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320874: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320878: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x320878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x32087c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320880: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320884: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320888: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32088c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x32088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320890: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320890u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320894: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320898: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x320898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x32089c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32089cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3208a0: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x3208a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208a4: 0x92030346  lbu         $v1, 0x346($s0)
    ctx->pc = 0x3208a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 838)));
    // 0x3208a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3208a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3208ac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3208acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3208b0: 0x14200143  bnez        $at, . + 4 + (0x143 << 2)
    ctx->pc = 0x3208B0u;
    {
        const bool branch_taken_0x3208b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3208b0) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x3208B8u;
    // 0x3208b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3208b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3208bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3208bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208c0: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x3208c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x3208c4: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x3208C4u;
    {
        const bool branch_taken_0x3208c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208c4) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x3208CCu;
label_3208cc:
    // 0x3208cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3208ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208d0: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x3208d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x3208d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3208d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3208d8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3208d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3208dc: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3208DCu;
    {
        const bool branch_taken_0x3208dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3208dc) {
            ctx->pc = 0x3209BCu;
            goto label_3209bc;
        }
    }
    ctx->pc = 0x3208E4u;
    // 0x3208e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3208e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208e8: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x3208e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x3208ec: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3208ECu;
    {
        const bool branch_taken_0x3208ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3208ec) {
            ctx->pc = 0x3209A4u;
            goto label_3209a4;
        }
    }
    ctx->pc = 0x3208F4u;
    // 0x3208f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3208f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208f8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x3208f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x3208fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3208fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x320900: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x320900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320908: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x32090c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32090cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320910: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x320910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x320914: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x320914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x320918: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32091c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320920: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320924: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320928: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x32092c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320930: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x320930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x320934: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320934u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320938: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x320938u;
    {
        const bool branch_taken_0x320938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320938) {
            ctx->pc = 0x320978u;
            goto label_320978;
        }
    }
    ctx->pc = 0x320940u;
label_320940:
    // 0x320940: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320944: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320948: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32094c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320950: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320958: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32095c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x32095cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320960: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320964: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32096c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x32096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320970: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320970u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_320978:
    // 0x320978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32097c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x32097cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320980: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320984: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320988: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x320988u;
    {
        const bool branch_taken_0x320988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320988) {
            ctx->pc = 0x320940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320940;
        }
    }
    ctx->pc = 0x320990u;
    // 0x320990: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320998: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x320998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x32099c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x32099Cu;
    {
        const bool branch_taken_0x32099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32099c) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x3209A4u;
label_3209a4:
    // 0x3209a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3209a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209a8: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x3209a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x3209ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3209acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3209b0: 0xac830364  sw          $v1, 0x364($a0)
    ctx->pc = 0x3209b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 3));
    // 0x3209b4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x3209B4u;
    {
        const bool branch_taken_0x3209b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3209b4) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x3209BCu;
label_3209bc:
    // 0x3209bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3209bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209c0: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x3209c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x3209c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3209c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3209c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3209c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209cc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3209ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3209d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3209d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3209d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3209d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3209d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3209d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209dc: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x3209dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x3209e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3209e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3209e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3209e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3209e8: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3209E8u;
    {
        const bool branch_taken_0x3209e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3209e8) {
            ctx->pc = 0x320A9Cu;
            goto label_320a9c;
        }
    }
    ctx->pc = 0x3209F0u;
    // 0x3209f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x3209f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x3209f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3209f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3209fc: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x3209fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a04: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320a08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x320a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x320a10: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x320a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x320a14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a1c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320a20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a24: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x320a28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320a2c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x320a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x320a30: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320a30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320a34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x320A34u;
    {
        const bool branch_taken_0x320a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a34) {
            ctx->pc = 0x320A78u;
            goto label_320a78;
        }
    }
    ctx->pc = 0x320A3Cu;
label_320a3c:
    // 0x320a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a40: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320a44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x320a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320a4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320a50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320a58: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320a58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320a5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320a60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320a68: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320a6c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320a70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320a74: 0x0  nop
    ctx->pc = 0x320a74u;
    // NOP
label_320a78:
    // 0x320a78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a7c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320a80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a84: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320a88: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320A88u;
    {
        const bool branch_taken_0x320a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a88) {
            ctx->pc = 0x320A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320a3c;
        }
    }
    ctx->pc = 0x320A90u;
    // 0x320a90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320a94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a98: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x320a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
label_320a9c:
    // 0x320a9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320aa0: 0x9085034f  lbu         $a1, 0x34F($a0)
    ctx->pc = 0x320aa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x320aa4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x320aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x320aa8: 0xa083034f  sb          $v1, 0x34F($a0)
    ctx->pc = 0x320aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x320aac: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x320AACu;
    {
        const bool branch_taken_0x320aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320aac) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320AB4u;
label_320ab4:
    // 0x320ab4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ab8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x320ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320abc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x320abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x320ac0: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x320ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320ac4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ac8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x320ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320acc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320ad0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x320ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x320ad4: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x320ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x320ad8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x320ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320adc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x320adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ae0: 0xa0c5034b  sb          $a1, 0x34B($a2)
    ctx->pc = 0x320ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 843), (uint8_t)GPR_U32(ctx, 5));
    // 0x320ae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ae8: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x320aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320af0: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x320af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x320af4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320af4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320af8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320AF8u;
    {
        const bool branch_taken_0x320af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320af8) {
            ctx->pc = 0x320B28u;
            goto label_320b28;
        }
    }
    ctx->pc = 0x320B00u;
label_320b00:
    // 0x320b00: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320b04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320b0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x320b0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320b10: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320b14: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x320b14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b18: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x320b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x320b1c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320b20: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x320b20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x320b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_320b28:
    // 0x320b28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b2c: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x320b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320b30: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x320b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x320b34: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320b38: 0x1020fff1  beqz        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x320B38u;
    {
        const bool branch_taken_0x320b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b38) {
            ctx->pc = 0x320B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320b00;
        }
    }
    ctx->pc = 0x320B40u;
    // 0x320b40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b44: 0x90850348  lbu         $a1, 0x348($a0)
    ctx->pc = 0x320b44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320b48: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x320b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320b4c: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x320B4Cu;
    {
        const bool branch_taken_0x320b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320b4c) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320B54u;
    // 0x320b54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x320b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320b58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b5c: 0xac650358  sw          $a1, 0x358($v1)
    ctx->pc = 0x320b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 5));
    // 0x320b60: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x320B60u;
    {
        const bool branch_taken_0x320b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b60) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320B68u;
label_320b68:
    // 0x320b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b6c: 0x90850abc  lbu         $a1, 0xABC($a0)
    ctx->pc = 0x320b6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2748)));
    // 0x320b70: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x320b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320b74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x320b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320b78: 0x10c30073  beq         $a2, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x320B78u;
    {
        const bool branch_taken_0x320b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x320b78) {
            ctx->pc = 0x320D48u;
            goto label_320d48;
        }
    }
    ctx->pc = 0x320B80u;
    // 0x320b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b84: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x320B84u;
    {
        const bool branch_taken_0x320b84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x320b84) {
            ctx->pc = 0x320C80u;
            goto label_320c80;
        }
    }
    ctx->pc = 0x320B8Cu;
    // 0x320b8c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x320B8Cu;
    {
        const bool branch_taken_0x320b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b8c) {
            ctx->pc = 0x320B9Cu;
            goto label_320b9c;
        }
    }
    ctx->pc = 0x320B94u;
    // 0x320b94: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x320B94u;
    {
        const bool branch_taken_0x320b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b94) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320B9Cu;
label_320b9c:
    // 0x320b9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ba0: 0x90910346  lbu         $s1, 0x346($a0)
    ctx->pc = 0x320ba0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320ba4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x320ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x320ba8: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x320ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x320bac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bb0: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x320bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x320bb4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x320bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320bb8: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x320bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x320bbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bc0: 0x90650348  lbu         $a1, 0x348($v1)
    ctx->pc = 0x320bc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320bc4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x320bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320bc8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x320bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x320bcc: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x320bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x320bd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320bd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bd8: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320bdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320be0: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x320be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320be4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320be8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x320be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x320bec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bf0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x320bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x320bf4: 0x78700000  lq          $s0, 0x0($v1)
    ctx->pc = 0x320bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320bfc: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x320bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320c00: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c04: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x320c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x320c08: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x320c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x320c10: 0x24660480  addiu       $a2, $v1, 0x480
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320c14: 0x7cd00000  sq          $s0, 0x0($a2)
    ctx->pc = 0x320c14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 16));
    // 0x320c18: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c1c: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x320c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x320c20: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x320c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c28: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x320c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x320c2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c30: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x320c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x320c34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320C34u;
    {
        const bool branch_taken_0x320c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320c34) {
            ctx->pc = 0x320C48u;
            goto label_320c48;
        }
    }
    ctx->pc = 0x320C3Cu;
    // 0x320c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c44: 0xa0850abc  sb          $a1, 0xABC($a0)
    ctx->pc = 0x320c44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2748), (uint8_t)GPR_U32(ctx, 5));
label_320c48:
    // 0x320c48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c4c: 0x90660344  lbu         $a2, 0x344($v1)
    ctx->pc = 0x320c4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320c50: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x320c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x320c54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c58: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x320c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x320c5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c60: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x320c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x320c64: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x320C64u;
    {
        const bool branch_taken_0x320c64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x320c64) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320C6Cu;
    // 0x320c6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320c70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c74: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x320c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x320c78: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x320C78u;
    {
        const bool branch_taken_0x320c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c78) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320C80u;
label_320c80:
    // 0x320c80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c84: 0x90a30346  lbu         $v1, 0x346($a1)
    ctx->pc = 0x320c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x320c88: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x320c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c8c: 0xa0a40346  sb          $a0, 0x346($a1)
    ctx->pc = 0x320c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x320c90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c94: 0x90a30345  lbu         $v1, 0x345($a1)
    ctx->pc = 0x320c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x320c98: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x320c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c9c: 0xa0b00345  sb          $s0, 0x345($a1)
    ctx->pc = 0x320c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 16));
    // 0x320ca0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320ca0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320ca4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x320CA4u;
    {
        const bool branch_taken_0x320ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ca4) {
            ctx->pc = 0x320CE8u;
            goto label_320ce8;
        }
    }
    ctx->pc = 0x320CACu;
label_320cac:
    // 0x320cac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cb0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320cb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320cb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x320cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320cbc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320cc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320cc8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x320cc8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320ccc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320cd8: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x320cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320cdc: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x320cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x320ce0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x320ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320ce4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x320ce4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_320ce8:
    // 0x320ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320cf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320cf4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320cf8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320CF8u;
    {
        const bool branch_taken_0x320cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320cf8) {
            ctx->pc = 0x320CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320cac;
        }
    }
    ctx->pc = 0x320D00u;
    // 0x320d00: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x320d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d04: 0x92030344  lbu         $v1, 0x344($s0)
    ctx->pc = 0x320d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x320d08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d10: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x320d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x320d14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320d18: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x320d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x320d1c: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x320D1Cu;
    {
        const bool branch_taken_0x320d1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x320d1c) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320D24u;
    // 0x320d24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x320d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d2c: 0xa0650abc  sb          $a1, 0xABC($v1)
    ctx->pc = 0x320d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 5));
    // 0x320d30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d34: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x320d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x320d38: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x320d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x320d3c: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x320d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x320d40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x320D40u;
    {
        const bool branch_taken_0x320d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d40) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320D48u;
label_320d48:
    // 0x320d48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d4c: 0xc46102dc  lwc1        $f1, 0x2DC($v1)
    ctx->pc = 0x320d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d50: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x320d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x320d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x320d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320d58: 0x0  nop
    ctx->pc = 0x320d58u;
    // NOP
    // 0x320d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x320d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x320d60: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x320d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x320d64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d68: 0xc46102dc  lwc1        $f1, 0x2DC($v1)
    ctx->pc = 0x320d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x320d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320d74: 0x0  nop
    ctx->pc = 0x320d74u;
    // NOP
    // 0x320d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x320d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320d7c: 0x0  nop
    ctx->pc = 0x320d7cu;
    // NOP
    // 0x320d80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x320D80u;
    {
        const bool branch_taken_0x320d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x320d80) {
            ctx->pc = 0x320DA0u;
            goto label_320da0;
        }
    }
    ctx->pc = 0x320D88u;
    // 0x320d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320d8c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d90: 0xe4a002dc  swc1        $f0, 0x2DC($a1)
    ctx->pc = 0x320d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 732), bits); }
    // 0x320d94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320d98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d9c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x320d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
label_320da0:
    // 0x320da0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320da4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x320da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320da8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320dac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320DACu;
    {
        const bool branch_taken_0x320dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320dac) {
            ctx->pc = 0x320DC0u;
            goto label_320dc0;
        }
    }
    ctx->pc = 0x320DB4u;
    // 0x320db4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320db8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320dbc: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x320dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
label_320dc0:
    // 0x320dc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320dc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x320DC4u;
    {
        const bool branch_taken_0x320dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320dc4) {
            ctx->pc = 0x320E88u;
            goto label_320e88;
        }
    }
    ctx->pc = 0x320DCCu;
label_320dcc:
    // 0x320dcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x320DCCu;
    SET_GPR_U32(ctx, 31, 0x320DD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x320DCCu, 0x320DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DD4u;
label_320dd4:
    // 0x320dd4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x320dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x320dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320ddc: 0x0  nop
    ctx->pc = 0x320ddcu;
    // NOP
    // 0x320de0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320de4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320de8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320dec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x320df0: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x320df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x320df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x320df8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e04: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x320e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x320e08: 0xc067648  jal         func_19D920
    ctx->pc = 0x320E08u;
    SET_GPR_U32(ctx, 31, 0x320E10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x320E08u, 0x320E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E10u;
label_320e10:
    // 0x320e10: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x320e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x320e14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320e18: 0x0  nop
    ctx->pc = 0x320e18u;
    // NOP
    // 0x320e1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320e1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320e20: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e28: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x320e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e2c: 0xc4a00484  lwc1        $f0, 0x484($a1)
    ctx->pc = 0x320e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320e30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x320e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x320e34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e40: 0xe4600484  swc1        $f0, 0x484($v1)
    ctx->pc = 0x320e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1156), bits); }
    // 0x320e44: 0xc067648  jal         func_19D920
    ctx->pc = 0x320E44u;
    SET_GPR_U32(ctx, 31, 0x320E4Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x320E44u, 0x320E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E4Cu;
label_320e4c:
    // 0x320e4c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x320e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x320e50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320e54: 0x0  nop
    ctx->pc = 0x320e54u;
    // NOP
    // 0x320e58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320e58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320e5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e68: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x320e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x320e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x320e70: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x320e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e7c: 0xe4800488  swc1        $f0, 0x488($a0)
    ctx->pc = 0x320e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1160), bits); }
    // 0x320e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320e84: 0x0  nop
    ctx->pc = 0x320e84u;
    // NOP
label_320e88:
    // 0x320e88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e8c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320e90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320e94: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x320e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x320e98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x320E98u;
    {
        const bool branch_taken_0x320e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320e98) {
            ctx->pc = 0x320DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320dcc;
        }
    }
    ctx->pc = 0x320EA0u;
    // 0x320ea0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x320ea0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320eac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x320eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x320EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320EB8u;
}
