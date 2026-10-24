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

// Function: Em09_R1_mv11
// Address: 0x34b530 - 0x34b73c
void Em09_R1_mv11_0x34b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv11_0x34b530");
#endif

    switch (ctx->pc) {
        case 0x34b5b0u: goto label_34b5b0;
        case 0x34b6acu: goto label_34b6ac;
        case 0x34b6b8u: goto label_34b6b8;
        case 0x34b6c8u: goto label_34b6c8;
        case 0x34b6d4u: goto label_34b6d4;
        default: break;
    }

    ctx->pc = 0x34b530u;

    // 0x34b530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34b534: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34b534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34b538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b53c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x34b540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b544: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34b544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34b548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b54c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b550: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34b554: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x34b558: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34b558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34b55c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b560: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34b560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34b564: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34b564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b56c: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x34B56Cu;
    {
        const bool branch_taken_0x34b56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b56c) {
            ctx->pc = 0x34B614u;
            goto label_34b614;
        }
    }
    ctx->pc = 0x34B574u;
    // 0x34b574: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B574u;
    {
        const bool branch_taken_0x34b574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b574) {
            ctx->pc = 0x34B584u;
            goto label_34b584;
        }
    }
    ctx->pc = 0x34B57Cu;
    // 0x34b57c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x34B57Cu;
    {
        const bool branch_taken_0x34b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b57c) {
            ctx->pc = 0x34B728u;
            goto label_34b728;
        }
    }
    ctx->pc = 0x34B584u;
label_34b584:
    // 0x34b584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b588: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b58c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b590: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b594: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b598: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b59c: 0x24060f0d  addiu       $a2, $zero, 0xF0D
    ctx->pc = 0x34b59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3853));
    // 0x34b5a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b5a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b5a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B5A8u;
    SET_GPR_U32(ctx, 31, 0x34B5B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B5A8u, 0x34B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5B0u;
label_34b5b0:
    // 0x34b5b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b5b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b5b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34b5bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34b5c0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34b5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b5c8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34b5cc: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34b5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34b5d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34b5d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b5d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b5dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34b5e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34b5e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b5e8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b5ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34b5f0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34b5f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34b5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b5fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b600: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b604: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34b604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34b608: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x34b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34b60c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b610: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x34b610u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_34b614:
    // 0x34b614: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b618: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b61c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b624: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b628: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34b628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34b62c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x34b630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b634: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b638: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b63c: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x34b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x34b640: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34b644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b648: 0x0  nop
    ctx->pc = 0x34b648u;
    // NOP
    // 0x34b64c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34b64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34b650: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b658: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x34b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b65c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34b660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34b664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b668: 0x0  nop
    ctx->pc = 0x34b668u;
    // NOP
    // 0x34b66c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b670: 0x0  nop
    ctx->pc = 0x34b670u;
    // NOP
    // 0x34b674: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34B674u;
    {
        const bool branch_taken_0x34b674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b674) {
            ctx->pc = 0x34B690u;
            goto label_34b690;
        }
    }
    ctx->pc = 0x34B67Cu;
    // 0x34b67c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34b680: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b68c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_34b690:
    // 0x34b690: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34b694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b698: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34b698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b69c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b6a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b6a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B6A4u;
    SET_GPR_U32(ctx, 31, 0x34B6ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B6A4u, 0x34B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6ACu;
label_34b6ac:
    // 0x34b6ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6b0: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x34B6B0u;
    SET_GPR_U32(ctx, 31, 0x34B6B8u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x34B6B0u, 0x34B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6B8u;
label_34b6b8:
    // 0x34b6b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b6bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b6c0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B6C0u;
    SET_GPR_U32(ctx, 31, 0x34B6C8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B6C0u, 0x34B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6C8u;
label_34b6c8:
    // 0x34b6c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6cc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B6CCu;
    SET_GPR_U32(ctx, 31, 0x34B6D4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B6CCu, 0x34B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6D4u;
label_34b6d4:
    // 0x34b6d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x34b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6d8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x34b6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x34b6dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34b6e0: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x34b6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34b6e4: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34B6E4u;
    {
        const bool branch_taken_0x34b6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b6e4) {
            ctx->pc = 0x34B728u;
            goto label_34b728;
        }
    }
    ctx->pc = 0x34B6ECu;
    // 0x34b6ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b6f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b6f4: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x34b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x34b6f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b6fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b700: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34b700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b704: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x34b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34b708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b70c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34b70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b710: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b714: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34b714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b71c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b724: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34b724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34b728:
    // 0x34b728: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34b728u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b730: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34b734: 0x3e00008  jr          $ra
    ctx->pc = 0x34B734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B73Cu;
}
