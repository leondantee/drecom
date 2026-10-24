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

// Function: entry_0019c198
// Address: 0x19c198 - 0x19c314
void entry_0019c198_0x19c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c198_0x19c198");
#endif

    switch (ctx->pc) {
        case 0x19c28cu: goto label_19c28c;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c30cu: goto label_19c30c;
        default: break;
    }

    ctx->pc = 0x19c198u;

    // 0x19c198: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c19c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19c1a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c1a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x19c1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c1a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c1ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19c1acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19c1b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19c1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c1b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19c1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19c1b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19c1bc: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x19C1BCu;
    {
        const bool branch_taken_0x19c1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c1bc) {
            ctx->pc = 0x19C3E4u;
            return;
        }
    }
    ctx->pc = 0x19C1C4u;
    // 0x19c1c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c1c8: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x19c1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c1d0: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x19c1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c1d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c1d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c1d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c1dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c1e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c1e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c1e4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19c1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19c1e8: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x19C1E8u;
    {
        const bool branch_taken_0x19c1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1e8) {
            ctx->pc = 0x19C3DCu;
            return;
        }
    }
    ctx->pc = 0x19C1F0u;
    // 0x19c1f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19c1f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19c1f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c1fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19c204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19c208: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19c20c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19c210: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19c214: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19c214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c218: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c220: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19c224: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19c224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19c228: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19c22c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19c22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19c230: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19c230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19c234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19c238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c23c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x19C23Cu;
    {
        const bool branch_taken_0x19c23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c23c) {
            ctx->pc = 0x19C314u;
            return;
        }
    }
    ctx->pc = 0x19C244u;
    // 0x19c244: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c24c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c250: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19c250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19c254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c258: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x19c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19c25c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x19c260: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c264: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c268: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c26c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x19c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c270: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x19c270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c274: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19c278: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c27c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c280: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c284: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19C284u;
    SET_GPR_U32(ctx, 31, 0x19C28Cu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19C284u, 0x19C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C28Cu;
label_19c28c:
    // 0x19c28c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19c290: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c294: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C294u;
    SET_GPR_U32(ctx, 31, 0x19C29Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C294u, 0x19C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C29Cu;
label_19c29c:
    // 0x19c29c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x19c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x19c2a0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c2a4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C2A4u;
    SET_GPR_U32(ctx, 31, 0x19C2ACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C2A4u, 0x19C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2ACu;
label_19c2ac:
    // 0x19c2ac: 0x24020507  addiu       $v0, $zero, 0x507
    ctx->pc = 0x19c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x19c2b0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x19c2b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c2b4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x19c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x19c2b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19c2bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19c2bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c2c0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c2c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19c2c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19c2cc: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19c2d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c2d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c2d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c2dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c2e0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19c2e4: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19C2E4u;
    SET_GPR_U32(ctx, 31, 0x19C2ECu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19C2ECu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C2ECu) { return; }
    ctx->pc = 0x19C2ECu;
label_19c2ec:
    // 0x19c2ec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19c2f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19c2f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c2f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x19c2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19c2fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c300: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19c300u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c304: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19C304u;
    SET_GPR_U32(ctx, 31, 0x19C30Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19C304u, 0x19C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C30Cu;
label_19c30c:
    // 0x19c30c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19C30Cu;
    {
        const bool branch_taken_0x19c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c30c) {
            ctx->pc = 0x19C3DCu;
            return;
        }
    }
    ctx->pc = 0x19C314u;
}
