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

// Function: R10a_stained_glass_fall01
// Address: 0x275210 - 0x275cfc
void R10a_stained_glass_fall01_0x275210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_stained_glass_fall01_0x275210");
#endif

    switch (ctx->pc) {
        case 0x275258u: goto label_275258;
        case 0x275274u: goto label_275274;
        case 0x275290u: goto label_275290;
        case 0x27530cu: goto label_27530c;
        case 0x27532cu: goto label_27532c;
        case 0x275360u: goto label_275360;
        case 0x27537cu: goto label_27537c;
        case 0x27538cu: goto label_27538c;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753d0u: goto label_2753d0;
        case 0x275460u: goto label_275460;
        case 0x275490u: goto label_275490;
        case 0x275538u: goto label_275538;
        case 0x275568u: goto label_275568;
        case 0x2755e0u: goto label_2755e0;
        case 0x275628u: goto label_275628;
        case 0x2756c4u: goto label_2756c4;
        case 0x2756d0u: goto label_2756d0;
        case 0x27571cu: goto label_27571c;
        case 0x2757e0u: goto label_2757e0;
        case 0x275824u: goto label_275824;
        case 0x275880u: goto label_275880;
        default: break;
    }

    ctx->pc = 0x275210u;

    // 0x275210: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x275210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x275214: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x275214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x275218: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x275218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27521c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x275220: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x275220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x275224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x275224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x275228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x275228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27522c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x275230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27523c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x27523cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x275240: 0x2464fe00  addiu       $a0, $v1, -0x200
    ctx->pc = 0x275240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x275244: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x275244u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x275248: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27524c: 0x2464fdc0  addiu       $a0, $v1, -0x240
    ctx->pc = 0x27524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966720));
    // 0x275250: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x275250u;
    SET_GPR_U32(ctx, 31, 0x275258u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x275258u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x275258u) { return; }
    ctx->pc = 0x275258u;
label_275258:
    // 0x275258: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x275258u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27525c: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x27525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275260: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x275260u;
    {
        const bool branch_taken_0x275260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275260) {
            ctx->pc = 0x275310u;
            goto label_275310;
        }
    }
    ctx->pc = 0x275268u;
    // 0x275268: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x275268u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27526c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27526Cu;
    {
        const bool branch_taken_0x27526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27526c) {
            ctx->pc = 0x2752F8u;
            goto label_2752f8;
        }
    }
    ctx->pc = 0x275274u;
label_275274:
    // 0x275274: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x275274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x275278: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27527c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x27527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x275280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275284: 0x8c641390  lw          $a0, 0x1390($v1)
    ctx->pc = 0x275284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x275288: 0xc096558  jal         func_259560
    ctx->pc = 0x275288u;
    SET_GPR_U32(ctx, 31, 0x275290u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x275288u, 0x275290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275290u;
label_275290:
    // 0x275290: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x275290u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275294: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x275294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x275298: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27529c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x27529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2752a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2752a4: 0x8c831390  lw          $v1, 0x1390($a0)
    ctx->pc = 0x2752a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x2752a8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2752a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2752ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2752acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2752b0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2752b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2752b4: 0x3c03462f  lui         $v1, 0x462F
    ctx->pc = 0x2752b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17967 << 16));
    // 0x2752b8: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x2752b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x2752bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2752bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752c0: 0x0  nop
    ctx->pc = 0x2752c0u;
    // NOP
    // 0x2752c4: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x2752c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x2752c8: 0x3c044622  lui         $a0, 0x4622
    ctx->pc = 0x2752c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17954 << 16));
    // 0x2752cc: 0x34835000  ori         $v1, $a0, 0x5000
    ctx->pc = 0x2752ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x2752d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2752d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752d4: 0x0  nop
    ctx->pc = 0x2752d4u;
    // NOP
    // 0x2752d8: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2752d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2752dc: 0x3c03c5a4  lui         $v1, 0xC5A4
    ctx->pc = 0x2752dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50596 << 16));
    // 0x2752e0: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2752e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2752e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2752e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752e8: 0x0  nop
    ctx->pc = 0x2752e8u;
    // NOP
    // 0x2752ec: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2752ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2752f0: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2752f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2752f4: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2752f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2752f8:
    // 0x2752f8: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x2752f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2752fc: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2752FCu;
    {
        const bool branch_taken_0x2752fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2752fc) {
            ctx->pc = 0x275274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275274;
        }
    }
    ctx->pc = 0x275304u;
    // 0x275304: 0xc09d740  jal         func_275D00
    ctx->pc = 0x275304u;
    SET_GPR_U32(ctx, 31, 0x27530Cu);
    ctx->pc = 0x275D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275D00u, 0x275304u, 0x27530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27530Cu;
label_27530c:
    // 0x27530c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27530cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_275310:
    // 0x275310: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275314: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x275314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x275318: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x275318u;
    {
        const bool branch_taken_0x275318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x275318) {
            ctx->pc = 0x275444u;
            goto label_275444;
        }
    }
    ctx->pc = 0x275320u;
    // 0x275320: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x275320u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275324: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x275324u;
    {
        const bool branch_taken_0x275324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275324) {
            ctx->pc = 0x275430u;
            goto label_275430;
        }
    }
    ctx->pc = 0x27532Cu;
label_27532c:
    // 0x27532c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x27532cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275330: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275330u;
    {
        const bool branch_taken_0x275330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275330) {
            ctx->pc = 0x275344u;
            goto label_275344;
        }
    }
    ctx->pc = 0x275338u;
    // 0x275338: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x275338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x27533c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27533Cu;
    {
        const bool branch_taken_0x27533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27533c) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x275344u;
label_275344:
    // 0x275344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275348: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x275348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x27534c: 0x0  nop
    ctx->pc = 0x27534cu;
    // NOP
label_275350:
    // 0x275350: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x275350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x275354: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x275354u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x275358: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275358) {
            ctx->pc = 0x2753F8u;
            goto label_2753f8;
        }
    }
    ctx->pc = 0x275360u;
label_275360:
    // 0x275360: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x275364: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x275364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275368: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x275368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27536c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x275370: 0xc46c1830  lwc1        $f12, 0x1830($v1)
    ctx->pc = 0x275370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275374: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x275374u;
    SET_GPR_U32(ctx, 31, 0x27537Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x275374u, 0x27537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27537Cu;
label_27537c:
    // 0x27537c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x275380: 0x8e641bf0  lw          $a0, 0x1BF0($s3)
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275384: 0xc040044  jal         func_100110
    ctx->pc = 0x275384u;
    SET_GPR_U32(ctx, 31, 0x27538Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x275384u, 0x27538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27538Cu;
label_27538c:
    // 0x27538c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27538cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275390: 0x3c064095  lui         $a2, 0x4095
    ctx->pc = 0x275390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16533 << 16));
    // 0x275394: 0x34c3b800  ori         $v1, $a2, 0xB800
    ctx->pc = 0x275394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47104);
    // 0x275398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x275398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x27539c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x27539cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2753a0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2753A0u;
    SET_GPR_U32(ctx, 31, 0x2753A8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2753A0u, 0x2753A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753A8u;
label_2753a8:
    // 0x2753a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2753a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2753ac: 0x3c04402e  lui         $a0, 0x402E
    ctx->pc = 0x2753acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16430 << 16));
    // 0x2753b0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2753b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2753b4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2753b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2753b8: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2753B8u;
    SET_GPR_U32(ctx, 31, 0x2753C0u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2753B8u, 0x2753C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753C0u;
label_2753c0:
    // 0x2753c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2753c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2753c4: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2753c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2753c8: 0xc040048  jal         func_100120
    ctx->pc = 0x2753C8u;
    SET_GPR_U32(ctx, 31, 0x2753D0u);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2753C8u, 0x2753D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753D0u;
label_2753d0:
    // 0x2753d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2753d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2753d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2753D4u;
    {
        const bool branch_taken_0x2753d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2753d4) {
            ctx->pc = 0x2753F0u;
            goto label_2753f0;
        }
    }
    ctx->pc = 0x2753DCu;
    // 0x2753dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2753dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2753e0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2753e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2753e4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2753e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2753e8: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2753e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2753ec: 0xa0c71b30  sb          $a3, 0x1B30($a2)
    ctx->pc = 0x2753ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6960), (uint8_t)GPR_U32(ctx, 7));
label_2753f0:
    // 0x2753f0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2753f4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2753f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2753f8:
    // 0x2753f8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2753f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2753fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2753FCu;
    {
        const bool branch_taken_0x2753fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2753fc) {
            ctx->pc = 0x275410u;
            goto label_275410;
        }
    }
    ctx->pc = 0x275404u;
    // 0x275404: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x275408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275408u;
    {
        const bool branch_taken_0x275408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275408) {
            ctx->pc = 0x275418u;
            goto label_275418;
        }
    }
    ctx->pc = 0x275410u;
label_275410:
    // 0x275410: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x275414: 0x0  nop
    ctx->pc = 0x275414u;
    // NOP
label_275418:
    // 0x275418: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x275418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x27541c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27541Cu;
    {
        const bool branch_taken_0x27541c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27541c) {
            ctx->pc = 0x275360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275360;
        }
    }
    ctx->pc = 0x275424u;
    // 0x275424: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x275428: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275428u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x27542c: 0x0  nop
    ctx->pc = 0x27542cu;
    // NOP
label_275430:
    // 0x275430: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x275430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x275434: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x275434u;
    {
        const bool branch_taken_0x275434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275434) {
            ctx->pc = 0x27532Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27532c;
        }
    }
    ctx->pc = 0x27543Cu;
    // 0x27543c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27543Cu;
    {
        const bool branch_taken_0x27543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27543c) {
            ctx->pc = 0x2755D0u;
            goto label_2755d0;
        }
    }
    ctx->pc = 0x275444u;
label_275444:
    // 0x275444: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x275444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275448: 0x2c61001e  sltiu       $at, $v1, 0x1E
    ctx->pc = 0x275448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x27544c: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x27544Cu;
    {
        const bool branch_taken_0x27544c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27544c) {
            ctx->pc = 0x27552Cu;
            goto label_27552c;
        }
    }
    ctx->pc = 0x275454u;
    // 0x275454: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x275454u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275458: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x275458u;
    {
        const bool branch_taken_0x275458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275458) {
            ctx->pc = 0x275518u;
            goto label_275518;
        }
    }
    ctx->pc = 0x275460u;
label_275460:
    // 0x275460: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275464: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275464u;
    {
        const bool branch_taken_0x275464 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275464) {
            ctx->pc = 0x275478u;
            goto label_275478;
        }
    }
    ctx->pc = 0x27546Cu;
    // 0x27546c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x27546cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x275470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275470u;
    {
        const bool branch_taken_0x275470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275470) {
            ctx->pc = 0x275480u;
            goto label_275480;
        }
    }
    ctx->pc = 0x275478u;
label_275478:
    // 0x275478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27547c: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x27547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_275480:
    // 0x275480: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x275484: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x275484u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x275488: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x275488u;
    {
        const bool branch_taken_0x275488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275488) {
            ctx->pc = 0x2754E0u;
            goto label_2754e0;
        }
    }
    ctx->pc = 0x275490u;
label_275490:
    // 0x275490: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x275494: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x275494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275498: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x275498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27549c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2754a0: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x2754a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2754a4: 0x3c034498  lui         $v1, 0x4498
    ctx->pc = 0x2754a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17560 << 16));
    // 0x2754a8: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2754a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2754ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2754acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2754b0: 0x0  nop
    ctx->pc = 0x2754b0u;
    // NOP
    // 0x2754b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2754b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2754b8: 0x0  nop
    ctx->pc = 0x2754b8u;
    // NOP
    // 0x2754bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2754BCu;
    {
        const bool branch_taken_0x2754bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2754bc) {
            ctx->pc = 0x2754D8u;
            goto label_2754d8;
        }
    }
    ctx->pc = 0x2754C4u;
    // 0x2754c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2754c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2754c8: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2754c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2754cc: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2754ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2754d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2754d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2754d4: 0xa0651b30  sb          $a1, 0x1B30($v1)
    ctx->pc = 0x2754d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 5));
label_2754d8:
    // 0x2754d8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2754dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2754dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2754e0:
    // 0x2754e0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2754e4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2754E4u;
    {
        const bool branch_taken_0x2754e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2754e4) {
            ctx->pc = 0x2754F8u;
            goto label_2754f8;
        }
    }
    ctx->pc = 0x2754ECu;
    // 0x2754ec: 0x2416001d  addiu       $s6, $zero, 0x1D
    ctx->pc = 0x2754ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2754f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2754F0u;
    {
        const bool branch_taken_0x2754f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2754f0) {
            ctx->pc = 0x275500u;
            goto label_275500;
        }
    }
    ctx->pc = 0x2754F8u;
label_2754f8:
    // 0x2754f8: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x2754f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2754fc: 0x0  nop
    ctx->pc = 0x2754fcu;
    // NOP
label_275500:
    // 0x275500: 0x216302a  slt         $a2, $s0, $s6
    ctx->pc = 0x275500u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x275504: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x275504u;
    {
        const bool branch_taken_0x275504 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x275504) {
            ctx->pc = 0x275490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275490;
        }
    }
    ctx->pc = 0x27550Cu;
    // 0x27550c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x27550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x275510: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275510u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275514: 0x0  nop
    ctx->pc = 0x275514u;
    // NOP
label_275518:
    // 0x275518: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x275518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27551c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27551Cu;
    {
        const bool branch_taken_0x27551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27551c) {
            ctx->pc = 0x275460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275460;
        }
    }
    ctx->pc = 0x275524u;
    // 0x275524: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x275524u;
    {
        const bool branch_taken_0x275524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275524) {
            ctx->pc = 0x2755D0u;
            goto label_2755d0;
        }
    }
    ctx->pc = 0x27552Cu;
label_27552c:
    // 0x27552c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27552cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275530: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x275530u;
    {
        const bool branch_taken_0x275530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275530) {
            ctx->pc = 0x2755C0u;
            goto label_2755c0;
        }
    }
    ctx->pc = 0x275538u;
label_275538:
    // 0x275538: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27553c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27553Cu;
    {
        const bool branch_taken_0x27553c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27553c) {
            ctx->pc = 0x275550u;
            goto label_275550;
        }
    }
    ctx->pc = 0x275544u;
    // 0x275544: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x275544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x275548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275548u;
    {
        const bool branch_taken_0x275548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275548) {
            ctx->pc = 0x275558u;
            goto label_275558;
        }
    }
    ctx->pc = 0x275550u;
label_275550:
    // 0x275550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275554: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x275554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
label_275558:
    // 0x275558: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x275558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27555c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x27555cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275560: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x275560u;
    {
        const bool branch_taken_0x275560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275560) {
            ctx->pc = 0x275588u;
            goto label_275588;
        }
    }
    ctx->pc = 0x275568u;
label_275568:
    // 0x275568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x275568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27556c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x27556cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x275570: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x275570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x275574: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275578: 0xa0651b30  sb          $a1, 0x1B30($v1)
    ctx->pc = 0x275578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 5));
    // 0x27557c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x275580: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x275580u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275584: 0x0  nop
    ctx->pc = 0x275584u;
    // NOP
label_275588:
    // 0x275588: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27558c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27558Cu;
    {
        const bool branch_taken_0x27558c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27558c) {
            ctx->pc = 0x2755A0u;
            goto label_2755a0;
        }
    }
    ctx->pc = 0x275594u;
    // 0x275594: 0x2417001d  addiu       $s7, $zero, 0x1D
    ctx->pc = 0x275594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x275598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275598u;
    {
        const bool branch_taken_0x275598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275598) {
            ctx->pc = 0x2755A8u;
            goto label_2755a8;
        }
    }
    ctx->pc = 0x2755A0u;
label_2755a0:
    // 0x2755a0: 0x2417001e  addiu       $s7, $zero, 0x1E
    ctx->pc = 0x2755a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2755a4: 0x0  nop
    ctx->pc = 0x2755a4u;
    // NOP
label_2755a8:
    // 0x2755a8: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x2755a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2755ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2755ACu;
    {
        const bool branch_taken_0x2755ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755ac) {
            ctx->pc = 0x275568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275568;
        }
    }
    ctx->pc = 0x2755B4u;
    // 0x2755b4: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2755b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2755b8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2755b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2755bc: 0x0  nop
    ctx->pc = 0x2755bcu;
    // NOP
label_2755c0:
    // 0x2755c0: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x2755c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2755c4: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2755C4u;
    {
        const bool branch_taken_0x2755c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755c4) {
            ctx->pc = 0x275538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275538;
        }
    }
    ctx->pc = 0x2755CCu;
    // 0x2755cc: 0x0  nop
    ctx->pc = 0x2755ccu;
    // NOP
label_2755d0:
    // 0x2755d0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2755d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2755d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2755d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2755d8: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x2755D8u;
    {
        const bool branch_taken_0x2755d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2755d8) {
            ctx->pc = 0x275CB0u;
            goto label_275cb0;
        }
    }
    ctx->pc = 0x2755E0u;
label_2755e0:
    // 0x2755e0: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2755e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2755e4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2755e8: 0x2483e650  addiu       $v1, $a0, -0x19B0
    ctx->pc = 0x2755e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960720));
    // 0x2755ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2755ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2755f0: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x2755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2755f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2755f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2755f8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2755f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2755fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2755FCu;
    {
        const bool branch_taken_0x2755fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755fc) {
            ctx->pc = 0x275610u;
            goto label_275610;
        }
    }
    ctx->pc = 0x275604u;
    // 0x275604: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x275604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x275608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275608u;
    {
        const bool branch_taken_0x275608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275608) {
            ctx->pc = 0x275618u;
            goto label_275618;
        }
    }
    ctx->pc = 0x275610u;
label_275610:
    // 0x275610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275614: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x275614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_275618:
    // 0x275618: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x275618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x27561c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x27561cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275620: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x275620u;
    {
        const bool branch_taken_0x275620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275620) {
            ctx->pc = 0x275C78u;
            goto label_275c78;
        }
    }
    ctx->pc = 0x275628u;
label_275628:
    // 0x275628: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x275628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27562c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275630: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x275630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x275634: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x275634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x275638: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x27563c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x27563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275640: 0x90631b30  lbu         $v1, 0x1B30($v1)
    ctx->pc = 0x275640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6960)));
    // 0x275644: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x275644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x275648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27564c: 0x14830188  bne         $a0, $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x27564Cu;
    {
        const bool branch_taken_0x27564c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27564c) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275654u;
    // 0x275654: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x275654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x275658: 0x30a40007  andi        $a0, $a1, 0x7
    ctx->pc = 0x275658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x27565c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x275660: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x275660u;
    {
        const bool branch_taken_0x275660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x275660) {
            ctx->pc = 0x2756F0u;
            goto label_2756f0;
        }
    }
    ctx->pc = 0x275668u;
    // 0x275668: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x275668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x27566c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27566cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275670: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x275670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x275674: 0xe420d2dc  swc1        $f0, -0x2D24($at)
    ctx->pc = 0x275674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2DCu, _value); } while (0); }
    // 0x275678: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27567c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275680: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x275680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x275688: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27568c: 0x8e2402d0  lw          $a0, 0x2D0($s1)
    ctx->pc = 0x27568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275690: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275694: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x275694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x275698: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x275698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x27569c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x27569cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2756a0: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x2756a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x2756a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2756a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2756a8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2756a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2756ac: 0x24040b1b  addiu       $a0, $zero, 0xB1B
    ctx->pc = 0x2756acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2843));
    // 0x2756b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2756b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2756b4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2756b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2756b8: 0x2466d2d0  addiu       $a2, $v1, -0x2D30
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955728));
    // 0x2756bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2756BCu;
    SET_GPR_U32(ctx, 31, 0x2756C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2756BCu, 0x2756C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756C4u;
label_2756c4:
    // 0x2756c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2756c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2756c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2756C8u;
    SET_GPR_U32(ctx, 31, 0x2756D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2756C8u, 0x2756D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756D0u;
label_2756d0:
    // 0x2756d0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2756d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2756d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2756d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2756d8: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2756d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2756dc: 0x12840004  beq         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2756DCu;
    {
        const bool branch_taken_0x2756dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x2756dc) {
            ctx->pc = 0x2756F0u;
            goto label_2756f0;
        }
    }
    ctx->pc = 0x2756E4u;
    // 0x2756e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2756e8: 0xae830100  sw          $v1, 0x100($s4)
    ctx->pc = 0x2756e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 256), GPR_U32(ctx, 3));
    // 0x2756ec: 0x0  nop
    ctx->pc = 0x2756ecu;
    // NOP
label_2756f0:
    // 0x2756f0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2756f4: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2756f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2756f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2756f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2756fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2756fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275700: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275704: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275708: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x275708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27570c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x275710: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x275714: 0xc040c9e  jal         func_103278
    ctx->pc = 0x275714u;
    SET_GPR_U32(ctx, 31, 0x27571Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x27571Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27571Cu) { return; }
    ctx->pc = 0x27571Cu;
label_27571c:
    // 0x27571c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27571cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275724: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275728: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27572c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x27572cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275730: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x275730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x275734: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275738: 0x8e2402d0  lw          $a0, 0x2D0($s1)
    ctx->pc = 0x275738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27573c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275740: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x275740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x275744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275748: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27574c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x27574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275750: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x275750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x275754: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x275754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x275758: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27575c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x27575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275764: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x275764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x275768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27576c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x27576cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275770: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x275770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x275774: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275778: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27577c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27577cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275780: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275788: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x275788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x27578c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x27578cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275790: 0x3d0f021  addu        $fp, $fp, $s0
    ctx->pc = 0x275790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x275794: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x275794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x275798: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x275798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x27579c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27579cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2757a0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x2757a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2757a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2757a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2757a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2757a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2757ac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2757acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2757b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2757b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2757b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2757b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2757b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2757b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2757bc: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x2757bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2757c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2757c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2757c4: 0x121240  sll         $v0, $s2, 9
    ctx->pc = 0x2757c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2757c8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2757c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2757cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2757ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2757d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2757d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2757d4: 0x24460c30  addiu       $a2, $v0, 0xC30
    ctx->pc = 0x2757d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
    // 0x2757d8: 0xc040d62  jal         func_103588
    ctx->pc = 0x2757D8u;
    SET_GPR_U32(ctx, 31, 0x2757E0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x2757E0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2757E0u) { return; }
    ctx->pc = 0x2757E0u;
label_2757e0:
    // 0x2757e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2757e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2757e4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2757e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2757e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2757e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2757ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2757ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2757f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2757f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2757f4: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x2757f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2757f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2757f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2757fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2757fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275800: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x275800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x275804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x275808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27580c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27580cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x275810: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x275810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275814: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x275814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275818: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x275818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27581c: 0xc040c92  jal         func_103248
    ctx->pc = 0x27581Cu;
    SET_GPR_U32(ctx, 31, 0x275824u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x275824u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x275824u) { return; }
    ctx->pc = 0x275824u;
label_275824:
    // 0x275824: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x275824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275828: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x275828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27582c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27582cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x275830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275834: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x275834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x275838: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x275838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27583c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275840: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275844: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275848: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27584c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275850: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275854: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275858: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x275858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27585c: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x27585cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x275860: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275864: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x275864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x275868: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27586c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x27586cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x275870: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x275874: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x275874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x275878: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x275878u;
    SET_GPR_U32(ctx, 31, 0x275880u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x275880u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x275880u) { return; }
    ctx->pc = 0x275880u;
label_275880:
    // 0x275880: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x275880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x275884: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275888: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27588c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275890: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x275890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275894: 0x3c033fae  lui         $v1, 0x3FAE
    ctx->pc = 0x275894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16302 << 16));
    // 0x275898: 0x34635727  ori         $v1, $v1, 0x5727
    ctx->pc = 0x275898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22311);
    // 0x27589c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27589cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2758a0: 0x0  nop
    ctx->pc = 0x2758a0u;
    // NOP
    // 0x2758a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2758a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2758a8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2758a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2758ac: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x2758acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2758b0: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2758b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2758b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2758b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2758b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2758b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2758bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2758bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2758c0: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x2758c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2758c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2758c8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2758c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2758cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2758ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2758d0: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2758d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2758d4: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x2758d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2758d8: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2758d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2758dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2758e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2758e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2758e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2758e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2758e8: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x2758e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x2758ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2758ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2758f0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2758f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2758f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2758f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2758f8: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x2758f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2758fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2758fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275900: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x275900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x275904: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275904u;
    {
        const bool branch_taken_0x275904 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x275904) {
            ctx->pc = 0x275918u;
            goto label_275918;
        }
    }
    ctx->pc = 0x27590Cu;
    // 0x27590c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27590Cu;
    {
        const bool branch_taken_0x27590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27590c) {
            ctx->pc = 0x275918u;
            goto label_275918;
        }
    }
    ctx->pc = 0x275914u;
    // 0x275914: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x275914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_275918:
    // 0x275918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27591c: 0x146400bf  bne         $v1, $a0, . + 4 + (0xBF << 2)
    ctx->pc = 0x27591Cu;
    {
        const bool branch_taken_0x27591c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27591c) {
            ctx->pc = 0x275C1Cu;
            goto label_275c1c;
        }
    }
    ctx->pc = 0x275924u;
    // 0x275924: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275928: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27592c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27592cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275930: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275934: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275938: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27593c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275940: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275944: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x275944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x275948: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x27594c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27594cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275950: 0x0  nop
    ctx->pc = 0x275950u;
    // NOP
    // 0x275954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275958: 0x0  nop
    ctx->pc = 0x275958u;
    // NOP
    // 0x27595c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x27595Cu;
    {
        const bool branch_taken_0x27595c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27595c) {
            ctx->pc = 0x275A08u;
            goto label_275a08;
        }
    }
    ctx->pc = 0x275964u;
    // 0x275964: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275968: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27596c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27596cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275970: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275974: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275978: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27597c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275980: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275984: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x275984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x275988: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x27598c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27598cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275990: 0x0  nop
    ctx->pc = 0x275990u;
    // NOP
    // 0x275994: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275998: 0x0  nop
    ctx->pc = 0x275998u;
    // NOP
    // 0x27599c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x27599Cu;
    {
        const bool branch_taken_0x27599c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27599c) {
            ctx->pc = 0x275A08u;
            goto label_275a08;
        }
    }
    ctx->pc = 0x2759A4u;
    // 0x2759a4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2759a8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2759ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2759acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2759b0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2759b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2759b4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2759b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2759b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2759bc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2759bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x2759c0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2759c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2759c4: 0xac670060  sw          $a3, 0x60($v1)
    ctx->pc = 0x2759c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 7));
    // 0x2759c8: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2759c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2759cc: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2759d0: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x2759d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2759d4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2759d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2759d8: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2759d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2759dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2759dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2759e0: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x2759e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x2759e4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2759e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2759e8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2759e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2759ec: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2759ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2759f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2759f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2759f4: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x2759f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2759f8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2759f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2759fc: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x2759fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x275a00: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x275A00u;
    {
        const bool branch_taken_0x275a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a00) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275A08u;
label_275a08:
    // 0x275a08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275a0c: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x275a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275a10: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x275a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x275a14: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x275a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x275a18: 0x15a900  sll         $s5, $s5, 4
    ctx->pc = 0x275a18u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x275a1c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275a20: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x275a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x275a24: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a28: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x275a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x275a2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a34: 0x0  nop
    ctx->pc = 0x275a34u;
    // NOP
    // 0x275a38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275a3c: 0x0  nop
    ctx->pc = 0x275a3cu;
    // NOP
    // 0x275a40: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x275A40u;
    {
        const bool branch_taken_0x275a40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a40) {
            ctx->pc = 0x275AE4u;
            goto label_275ae4;
        }
    }
    ctx->pc = 0x275A48u;
    // 0x275a48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275a4c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275a50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275a54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275a58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275a5c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275a64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a68: 0x3c05bdcc  lui         $a1, 0xBDCC
    ctx->pc = 0x275a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48588 << 16));
    // 0x275a6c: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x275a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x275a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a74: 0x0  nop
    ctx->pc = 0x275a74u;
    // NOP
    // 0x275a78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275a7c: 0x0  nop
    ctx->pc = 0x275a7cu;
    // NOP
    // 0x275a80: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x275A80u;
    {
        const bool branch_taken_0x275a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a80) {
            ctx->pc = 0x275AE4u;
            goto label_275ae4;
        }
    }
    ctx->pc = 0x275A88u;
    // 0x275a88: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x275a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275a8c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275a90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275a94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275a98: 0x8e360058  lw          $s6, 0x58($s1)
    ctx->pc = 0x275a98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275a9c: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x275a9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x275aa0: 0xaec40060  sw          $a0, 0x60($s6)
    ctx->pc = 0x275aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 4));
    // 0x275aa4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x275aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275aa8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275aac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275ab0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275ab4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275ab8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x275ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275abc: 0xaca60064  sw          $a2, 0x64($a1)
    ctx->pc = 0x275abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 6));
    // 0x275ac0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x275ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275ac4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275ac8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275acc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275ad0: 0x8e370058  lw          $s7, 0x58($s1)
    ctx->pc = 0x275ad0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275ad4: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x275ad4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x275ad8: 0xaee40068  sw          $a0, 0x68($s7)
    ctx->pc = 0x275ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 104), GPR_U32(ctx, 4));
    // 0x275adc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x275ADCu;
    {
        const bool branch_taken_0x275adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275adc) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275AE4u;
label_275ae4:
    // 0x275ae4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275ae8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275aec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275af0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x275af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275af4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x275af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x275af8: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275afc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b00: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b04: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x275b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x275b08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275b10: 0x0  nop
    ctx->pc = 0x275b10u;
    // NOP
    // 0x275b14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275b18: 0x0  nop
    ctx->pc = 0x275b18u;
    // NOP
    // 0x275b1c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x275B1Cu;
    {
        const bool branch_taken_0x275b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275b1c) {
            ctx->pc = 0x275BC0u;
            goto label_275bc0;
        }
    }
    ctx->pc = 0x275B24u;
    // 0x275b24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275b28: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275b2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275b30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275b34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275b38: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b44: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x275b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x275b48: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x275b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275b4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275b4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275b50: 0x0  nop
    ctx->pc = 0x275b50u;
    // NOP
    // 0x275b54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275b58: 0x0  nop
    ctx->pc = 0x275b58u;
    // NOP
    // 0x275b5c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x275B5Cu;
    {
        const bool branch_taken_0x275b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275b5c) {
            ctx->pc = 0x275BC0u;
            goto label_275bc0;
        }
    }
    ctx->pc = 0x275B64u;
    // 0x275b64: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x275b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275b68: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275b6c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x275b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275b70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275b74: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b7c: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x275b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x275b80: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x275b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275b84: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275b88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275b8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275b90: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275b94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x275b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b98: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x275b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x275b9c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x275b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275ba0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275ba4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275ba8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x275ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275bac: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x275bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275bb0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x275bb4: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x275bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    // 0x275bb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x275BB8u;
    {
        const bool branch_taken_0x275bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275bb8) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275BC0u;
label_275bc0:
    // 0x275bc0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x275bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275bc4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275bc8: 0x90a021  addu        $s4, $a0, $s0
    ctx->pc = 0x275bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275bcc: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x275bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x275bd0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275bd8: 0xac660060  sw          $a2, 0x60($v1)
    ctx->pc = 0x275bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
    // 0x275bdc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275be0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275be4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x275be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275bec: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x275becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275bf0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275bf4: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x275bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x275bf8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x275bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275bfc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c00: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x275c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275c04: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x275c08: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275c10: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x275c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x275c14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x275C14u;
    {
        const bool branch_taken_0x275c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c14) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275C1Cu;
label_275c1c:
    // 0x275c1c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275c20: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275c28: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275c2c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275c34: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x275c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x275c38: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275c3c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275c44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275c48: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275c50: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x275c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x275c54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275c58: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c5c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x275c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275c60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275c64: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x275c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275c6c: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x275c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
label_275c70:
    // 0x275c70: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x275c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x275c74: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x275c74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_275c78:
    // 0x275c78: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275c7c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275C7Cu;
    {
        const bool branch_taken_0x275c7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275c7c) {
            ctx->pc = 0x275C90u;
            goto label_275c90;
        }
    }
    ctx->pc = 0x275C84u;
    // 0x275c84: 0x241e001d  addiu       $fp, $zero, 0x1D
    ctx->pc = 0x275c84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x275c88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275C88u;
    {
        const bool branch_taken_0x275c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c88) {
            ctx->pc = 0x275C98u;
            goto label_275c98;
        }
    }
    ctx->pc = 0x275C90u;
label_275c90:
    // 0x275c90: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x275c90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x275c94: 0x0  nop
    ctx->pc = 0x275c94u;
    // NOP
label_275c98:
    // 0x275c98: 0x21e182a  slt         $v1, $s0, $fp
    ctx->pc = 0x275c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x275c9c: 0x1460fe62  bnez        $v1, . + 4 + (-0x19E << 2)
    ctx->pc = 0x275C9Cu;
    {
        const bool branch_taken_0x275c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275c9c) {
            ctx->pc = 0x275628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275628;
        }
    }
    ctx->pc = 0x275CA4u;
    // 0x275ca4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x275ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x275ca8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275ca8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275cac: 0x0  nop
    ctx->pc = 0x275cacu;
    // NOP
label_275cb0:
    // 0x275cb0: 0x2a440006  slti        $a0, $s2, 0x6
    ctx->pc = 0x275cb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x275cb4: 0x1480fe4a  bnez        $a0, . + 4 + (-0x1B6 << 2)
    ctx->pc = 0x275CB4u;
    {
        const bool branch_taken_0x275cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x275cb4) {
            ctx->pc = 0x2755E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2755e0;
        }
    }
    ctx->pc = 0x275CBCu;
    // 0x275cbc: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x275cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275cc0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x275cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x275cc4: 0xae641bf0  sw          $a0, 0x1BF0($s3)
    ctx->pc = 0x275cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7152), GPR_U32(ctx, 4));
    // 0x275cc8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x275cc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275ccc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x275cccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275cd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x275cd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275cd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x275cd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275cd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x275cd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275cdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275ce0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275ce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275cf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x275cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x275cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x275CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275CFCu;
}
