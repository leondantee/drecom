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

// Function: R109_init
// Address: 0x27f190 - 0x27f334
void R109_init_0x27f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R109_init_0x27f190");
#endif

    switch (ctx->pc) {
        case 0x27f1acu: goto label_27f1ac;
        case 0x27f208u: goto label_27f208;
        case 0x27f214u: goto label_27f214;
        case 0x27f230u: goto label_27f230;
        case 0x27f254u: goto label_27f254;
        case 0x27f260u: goto label_27f260;
        case 0x27f2ecu: goto label_27f2ec;
        case 0x27f2f8u: goto label_27f2f8;
        case 0x27f31cu: goto label_27f31c;
        default: break;
    }

    ctx->pc = 0x27f190u;

    // 0x27f190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27f194: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x27f194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x27f198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f1a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f1a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f1a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27F1A4u;
    {
        const bool branch_taken_0x27f1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f1a4) {
            ctx->pc = 0x27F218u;
            goto label_27f218;
        }
    }
    ctx->pc = 0x27F1ACu;
label_27f1ac:
    // 0x27f1ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f1b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f1b4: 0x24421cb0  addiu       $v0, $v0, 0x1CB0
    ctx->pc = 0x27f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7344));
    // 0x27f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f1bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27f1bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f1c0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f1c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27f1c8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f1cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27f1d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f1d4: 0x0  nop
    ctx->pc = 0x27f1d4u;
    // NOP
    // 0x27f1d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27f1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27f1dc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27f1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27f1e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27f1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f1e8: 0x0  nop
    ctx->pc = 0x27f1e8u;
    // NOP
    // 0x27f1ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27f1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27f1f0: 0x2404171c  addiu       $a0, $zero, 0x171C
    ctx->pc = 0x27f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5916));
    // 0x27f1f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f1f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f1f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27f1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f1fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f1fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f200: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F200u;
    SET_GPR_U32(ctx, 31, 0x27F208u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F200u, 0x27F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F208u;
label_27f208:
    // 0x27f208: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f20c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F20Cu;
    SET_GPR_U32(ctx, 31, 0x27F214u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F20Cu, 0x27F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F214u;
label_27f214:
    // 0x27f214: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27f218:
    // 0x27f218: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x27f218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x27f21c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27F21Cu;
    {
        const bool branch_taken_0x27f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f21c) {
            ctx->pc = 0x27F1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f1ac;
        }
    }
    ctx->pc = 0x27F224u;
    // 0x27f224: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f224u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f228: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x27F228u;
    {
        const bool branch_taken_0x27f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f228) {
            ctx->pc = 0x27F300u;
            goto label_27f300;
        }
    }
    ctx->pc = 0x27F230u;
label_27f230:
    // 0x27f230: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f234: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f238: 0x24421dd0  addiu       $v0, $v0, 0x1DD0
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
    // 0x27f23c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f240: 0x24042600  addiu       $a0, $zero, 0x2600
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x27f244: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f248: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f248u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f24c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F24Cu;
    SET_GPR_U32(ctx, 31, 0x27F254u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F24Cu, 0x27F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F254u;
label_27f254:
    // 0x27f254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f258: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F258u;
    SET_GPR_U32(ctx, 31, 0x27F260u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F258u, 0x27F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F260u;
label_27f260:
    // 0x27f260: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x27f260u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f264: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x27f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27f268: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x27f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x27f26c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F26Cu;
    {
        const bool branch_taken_0x27f26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f26c) {
            ctx->pc = 0x27F290u;
            goto label_27f290;
        }
    }
    ctx->pc = 0x27F274u;
    // 0x27f274: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27f278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f27c: 0x0  nop
    ctx->pc = 0x27f27cu;
    // NOP
    // 0x27f280: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x27f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x27f284: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27f288: 0xa2220139  sb          $v0, 0x139($s1)
    ctx->pc = 0x27f288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f28c: 0x0  nop
    ctx->pc = 0x27f28cu;
    // NOP
label_27f290:
    // 0x27f290: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f294: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f298: 0x24421dd0  addiu       $v0, $v0, 0x1DD0
    ctx->pc = 0x27f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
    // 0x27f29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f2a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27f2a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f2a4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f2a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27f2ac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f2b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27f2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f2b8: 0x0  nop
    ctx->pc = 0x27f2b8u;
    // NOP
    // 0x27f2bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27f2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27f2c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27f2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27f2c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27f2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f2cc: 0x0  nop
    ctx->pc = 0x27f2ccu;
    // NOP
    // 0x27f2d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27f2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27f2d4: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27f2d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f2d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f2dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f2e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f2e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f2e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F2E4u;
    SET_GPR_U32(ctx, 31, 0x27F2ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F2E4u, 0x27F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2ECu;
label_27f2ec:
    // 0x27f2ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f2f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F2F0u;
    SET_GPR_U32(ctx, 31, 0x27F2F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F2F0u, 0x27F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2F8u;
label_27f2f8:
    // 0x27f2f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f2fc: 0x0  nop
    ctx->pc = 0x27f2fcu;
    // NOP
label_27f300:
    // 0x27f300: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x27f300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27f304: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x27F304u;
    {
        const bool branch_taken_0x27f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f304) {
            ctx->pc = 0x27F230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f230;
        }
    }
    ctx->pc = 0x27F30Cu;
    // 0x27f30c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f310: 0x24441ca0  addiu       $a0, $v0, 0x1CA0
    ctx->pc = 0x27f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7328));
    // 0x27f314: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27F314u;
    SET_GPR_U32(ctx, 31, 0x27F31Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27F314u, 0x27F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F31Cu;
label_27f31c:
    // 0x27f31c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27f31cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f328: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27f32c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F334u;
}
