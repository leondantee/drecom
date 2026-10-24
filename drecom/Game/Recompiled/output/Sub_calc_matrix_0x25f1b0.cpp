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

// Function: Sub_calc_matrix
// Address: 0x25f1b0 - 0x25f6f4
void Sub_calc_matrix_0x25f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sub_calc_matrix_0x25f1b0");
#endif

    switch (ctx->pc) {
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f230u: goto label_25f230;
        case 0x25f248u: goto label_25f248;
        case 0x25f2b8u: goto label_25f2b8;
        case 0x25f2f8u: goto label_25f2f8;
        case 0x25f310u: goto label_25f310;
        case 0x25f390u: goto label_25f390;
        case 0x25f558u: goto label_25f558;
        case 0x25f584u: goto label_25f584;
        case 0x25f5dcu: goto label_25f5dc;
        case 0x25f5f8u: goto label_25f5f8;
        case 0x25f630u: goto label_25f630;
        case 0x25f658u: goto label_25f658;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f67cu: goto label_25f67c;
        case 0x25f6b4u: goto label_25f6b4;
        default: break;
    }

    ctx->pc = 0x25f1b0u;

    // 0x25f1b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25f1b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x25f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x25f1b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f1bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f1c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f1c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f1c8: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x25f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x25f1cc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25f1ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25f1d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f1d4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25f1d8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25f1dc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x25F1DCu;
    {
        const bool branch_taken_0x25f1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f1dc) {
            ctx->pc = 0x25F298u;
            goto label_25f298;
        }
    }
    ctx->pc = 0x25F1E4u;
    // 0x25f1e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f1e8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F1E8u;
    SET_GPR_U32(ctx, 31, 0x25F1F0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F1F0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F1F0u) { return; }
    ctx->pc = 0x25F1F0u;
label_25f1f0:
    // 0x25f1f0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f1f4: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f1f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f1fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f200: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f204: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f208: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f20c: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f210: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f214: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f218: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f21c: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f220: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25f220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f224: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25f224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f228: 0xc067618  jal         func_19D860
    ctx->pc = 0x25F228u;
    SET_GPR_U32(ctx, 31, 0x25F230u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25F228u, 0x25F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F230u;
label_25f230:
    // 0x25f230: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f234: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25f238: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25f238u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f23c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f240: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25f244: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25f244u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_25f248:
    // 0x25f248: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25f248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f24c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f250: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f254: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f258: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f25c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f260: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f264: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f268: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f26c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25f26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25f270: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25f270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f274: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x25f274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x25f278: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f27c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f280: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f284: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f288: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f288u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f28c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x25F28Cu;
    {
        const bool branch_taken_0x25f28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f28c) {
            ctx->pc = 0x25F248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f248;
        }
    }
    ctx->pc = 0x25F294u;
    // 0x25f294: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25f294u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25f298:
    // 0x25f298: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f29c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25f2a0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x25f2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x25f2a4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x25F2A4u;
    {
        const bool branch_taken_0x25f2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f2a4) {
            ctx->pc = 0x25F360u;
            goto label_25f360;
        }
    }
    ctx->pc = 0x25F2ACu;
    // 0x25f2ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f2b0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F2B0u;
    SET_GPR_U32(ctx, 31, 0x25F2B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F2B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F2B8u) { return; }
    ctx->pc = 0x25F2B8u;
label_25f2b8:
    // 0x25f2b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2bc: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f2c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2c8: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f2d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2d4: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2d8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f2dc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2e4: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f2e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f2ec: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f2f0: 0xc067618  jal         func_19D860
    ctx->pc = 0x25F2F0u;
    SET_GPR_U32(ctx, 31, 0x25F2F8u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25F2F0u, 0x25F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2F8u;
label_25f2f8:
    // 0x25f2f8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2fc: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25f300: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25f300u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f304: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f308: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25f30c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_25f310:
    // 0x25f310: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f314: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f318: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f31c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f320: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f324: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f328: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f32c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f330: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f334: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25f334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25f338: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25f338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f33c: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x25f33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x25f340: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f344: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f348: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f34c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f350: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f354: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x25F354u;
    {
        const bool branch_taken_0x25f354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f354) {
            ctx->pc = 0x25F310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f310;
        }
    }
    ctx->pc = 0x25F35Cu;
    // 0x25f35c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25f35cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25f360:
    // 0x25f360: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f364: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25f364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f368: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F368u;
    {
        const bool branch_taken_0x25f368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f368) {
            ctx->pc = 0x25F390u;
            goto label_25f390;
        }
    }
    ctx->pc = 0x25F370u;
    // 0x25f370: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f374: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f378: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f37c: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25f380: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25f380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f384: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f388: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F388u;
    SET_GPR_U32(ctx, 31, 0x25F390u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F390u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F390u) { return; }
    ctx->pc = 0x25F390u;
label_25f390:
    // 0x25f390: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25f390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f394: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f398: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f39c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f3a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f3a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f3a8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f3ac: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f3b0: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f3b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f3b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f3bc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25F3BCu;
    {
        const bool branch_taken_0x25f3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25f3bc) {
            ctx->pc = 0x25F3F0u;
            goto label_25f3f0;
        }
    }
    ctx->pc = 0x25F3C4u;
    // 0x25f3c4: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f3c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f3cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f3d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f3d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f3d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f3dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f3e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f3e4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25f3e8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x25f3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f3ec: 0x0  nop
    ctx->pc = 0x25f3ecu;
    // NOP
label_25f3f0:
    // 0x25f3f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f3f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f3f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f3f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25f3fc: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x25F3FCu;
    {
        const bool branch_taken_0x25f3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f3fc) {
            ctx->pc = 0x25F6B8u;
            goto label_25f6b8;
        }
    }
    ctx->pc = 0x25F404u;
    // 0x25f404: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f408: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x25f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x25f40c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f410: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f414: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f418: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25f41c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25f41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f420: 0x92020143  lbu         $v0, 0x143($s0)
    ctx->pc = 0x25f420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f424: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25f428: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f42c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x25F42Cu;
    {
        const bool branch_taken_0x25f42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f42c) {
            ctx->pc = 0x25F538u;
            goto label_25f538;
        }
    }
    ctx->pc = 0x25F434u;
    // 0x25f434: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25f434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25f438: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f43c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25f43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25f440: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25F440u;
    {
        const bool branch_taken_0x25f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f440) {
            ctx->pc = 0x25F518u;
            goto label_25f518;
        }
    }
    ctx->pc = 0x25F448u;
    // 0x25f448: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25f448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25f44c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f450: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25f450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x25f454: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25F454u;
    {
        const bool branch_taken_0x25f454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f454) {
            ctx->pc = 0x25F494u;
            goto label_25f494;
        }
    }
    ctx->pc = 0x25F45Cu;
    // 0x25f45c: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f460: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x25f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f468: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25f46c: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f470: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x25f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f478: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25f478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25f47c: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f480: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x25f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f488: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25f488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25f48c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25F48Cu;
    {
        const bool branch_taken_0x25f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f48c) {
            ctx->pc = 0x25F4B8u;
            goto label_25f4b8;
        }
    }
    ctx->pc = 0x25F494u;
label_25f494:
    // 0x25f494: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x25f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f498: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25f49c: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x25f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f4a0: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25f4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25f4a4: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x25f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f4a8: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25f4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25f4ac: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f4acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f4b0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x25f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x25f4b4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_25f4b8:
    // 0x25f4b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f4bc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25f4c0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25f4c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f4c8: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f4cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f4d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f4d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25f4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25f4d8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f4dc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25f4e0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25f4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f4e8: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f4ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f4f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f4f4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25f4f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f4fc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25f500: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25f504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f508: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f50c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f514: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25f514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_25f518:
    // 0x25f518: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25f518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25f51c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f520: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x25f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x25f524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F524u;
    {
        const bool branch_taken_0x25f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f524) {
            ctx->pc = 0x25F538u;
            goto label_25f538;
        }
    }
    ctx->pc = 0x25F52Cu;
    // 0x25f52c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f530: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f534: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_25f538:
    // 0x25f538: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f53c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f540: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25f544: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F544u;
    {
        const bool branch_taken_0x25f544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f544) {
            ctx->pc = 0x25F590u;
            goto label_25f590;
        }
    }
    ctx->pc = 0x25F54Cu;
    // 0x25f54c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f550: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F550u;
    SET_GPR_U32(ctx, 31, 0x25F558u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F558u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F558u) { return; }
    ctx->pc = 0x25F558u;
label_25f558:
    // 0x25f558: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f55c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f560: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f564: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f568: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f56c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f570: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25f570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f574: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f578: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f57c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F57Cu;
    SET_GPR_U32(ctx, 31, 0x25F584u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F57Cu, 0x25F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F584u;
label_25f584:
    // 0x25f584: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f588: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f58c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f58cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_25f590:
    // 0x25f590: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f594: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f598: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25f59c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25F59Cu;
    {
        const bool branch_taken_0x25f59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f59c) {
            ctx->pc = 0x25F610u;
            goto label_25f610;
        }
    }
    ctx->pc = 0x25F5A4u;
    // 0x25f5a4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f5a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f5a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f5ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25f5b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F5B0u;
    {
        const bool branch_taken_0x25f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f5b0) {
            ctx->pc = 0x25F5E4u;
            goto label_25f5e4;
        }
    }
    ctx->pc = 0x25F5B8u;
    // 0x25f5b8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f5bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f5c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25f5c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F5C4u;
    {
        const bool branch_taken_0x25f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f5c4) {
            ctx->pc = 0x25F5F8u;
            goto label_25f5f8;
        }
    }
    ctx->pc = 0x25F5CCu;
    // 0x25f5cc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x25f5ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f5d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f5d4: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x25F5D4u;
    SET_GPR_U32(ctx, 31, 0x25F5DCu);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x25F5D4u, 0x25F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5DCu;
label_25f5dc:
    // 0x25f5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F5DCu;
    {
        const bool branch_taken_0x25f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f5dc) {
            ctx->pc = 0x25F5F8u;
            goto label_25f5f8;
        }
    }
    ctx->pc = 0x25F5E4u;
label_25f5e4:
    // 0x25f5e4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x25f5e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f5e8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25f5ec: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25f5ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f5f0: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F5F0u;
    SET_GPR_U32(ctx, 31, 0x25F5F8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F5F0u, 0x25F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5F8u;
label_25f5f8:
    // 0x25f5f8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f5fc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f600: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f604: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f608: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x25f608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x25f60c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f60cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_25f610:
    // 0x25f610: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f614: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f618: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25f61c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F61Cu;
    {
        const bool branch_taken_0x25f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f61c) {
            ctx->pc = 0x25F680u;
            goto label_25f680;
        }
    }
    ctx->pc = 0x25F624u;
    // 0x25f624: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f628: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F628u;
    SET_GPR_U32(ctx, 31, 0x25F630u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F630u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F630u) { return; }
    ctx->pc = 0x25F630u;
label_25f630:
    // 0x25f630: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f634: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f638: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f63c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f640: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f644: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f648: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f64c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x25f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x25f650: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F650u;
    SET_GPR_U32(ctx, 31, 0x25F658u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F658u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F658u) { return; }
    ctx->pc = 0x25F658u;
label_25f658:
    // 0x25f658: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x25f658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f65c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f660: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x25f660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f664: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F664u;
    SET_GPR_U32(ctx, 31, 0x25F66Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F664u, 0x25F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F66Cu;
label_25f66c:
    // 0x25f66c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x25f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x25f670: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f674: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F674u;
    SET_GPR_U32(ctx, 31, 0x25F67Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F67Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F67Cu) { return; }
    ctx->pc = 0x25F67Cu;
label_25f67c:
    // 0x25f67c: 0x0  nop
    ctx->pc = 0x25f67cu;
    // NOP
label_25f680:
    // 0x25f680: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f684: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f688: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f68c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f690: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f694: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25f698: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f69c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25f6a0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25f6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f6a4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x25f6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f6a8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25f6ac: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F6ACu;
    SET_GPR_U32(ctx, 31, 0x25F6B4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F6ACu, 0x25F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6B4u;
label_25f6b4:
    // 0x25f6b4: 0x0  nop
    ctx->pc = 0x25f6b4u;
    // NOP
label_25f6b8:
    // 0x25f6b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f6bc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f6c0: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f6c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f6c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f6c8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f6c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f6cc: 0x1460ff30  bnez        $v1, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x25F6CCu;
    {
        const bool branch_taken_0x25f6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f6cc) {
            ctx->pc = 0x25F390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f390;
        }
    }
    ctx->pc = 0x25F6D4u;
    // 0x25f6d4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x25f6d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f6e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25f6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25f6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25F6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F6F4u;
}
