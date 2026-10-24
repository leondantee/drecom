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

// Function: Em_attack_ck2
// Address: 0x1b40b0 - 0x1b4758
void Em_attack_ck2_0x1b40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_attack_ck2_0x1b40b0");
#endif

    switch (ctx->pc) {
        case 0x1b4130u: goto label_1b4130;
        case 0x1b4144u: goto label_1b4144;
        case 0x1b4158u: goto label_1b4158;
        case 0x1b4168u: goto label_1b4168;
        case 0x1b4194u: goto label_1b4194;
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b42acu: goto label_1b42ac;
        case 0x1b42bcu: goto label_1b42bc;
        case 0x1b431cu: goto label_1b431c;
        case 0x1b4348u: goto label_1b4348;
        case 0x1b4374u: goto label_1b4374;
        case 0x1b459cu: goto label_1b459c;
        case 0x1b45acu: goto label_1b45ac;
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4688u: goto label_1b4688;
        default: break;
    }

    ctx->pc = 0x1b40b0u;

    // 0x1b40b0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1b40b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1b40b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b40b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b40b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b40b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b40bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b40bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b40c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b40c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b40c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b40c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b40c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b40c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b40cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b40d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b40d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b40d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b40d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b40d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b40d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b40dc: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x1b40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x1b40e0: 0xafa50128  sw          $a1, 0x128($sp)
    ctx->pc = 0x1b40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 5));
    // 0x1b40e4: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x1b40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x1b40e8: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x1b40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x1b40ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b40ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b40f0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b40f4: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1b40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1b40f8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b40fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b40fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b4100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b4100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b4104: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1b4104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1b4108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b4108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b410c: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b410cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b4110: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1b4110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1b4114: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4118: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b411c: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b411cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b4120: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1b4120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4124: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1b4128: 0xc06c678  jal         func_1B19E0
    ctx->pc = 0x1B4128u;
    SET_GPR_U32(ctx, 31, 0x1B4130u);
    ctx->pc = 0x1B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19E0u, 0x1B4128u, 0x1B4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4130u;
label_1b4130:
    // 0x1b4130: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1b4130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x1b4134: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b4134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b4138: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b413c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1B413Cu;
    SET_GPR_U32(ctx, 31, 0x1B4144u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1B4144u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4144u) { return; }
    ctx->pc = 0x1B4144u;
label_1b4144:
    // 0x1b4144: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b4144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b4148: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b414c: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x1b414cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b4150: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B4150u;
    SET_GPR_U32(ctx, 31, 0x1B4158u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B4158u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4158u) { return; }
    ctx->pc = 0x1B4158u;
label_1b4158:
    // 0x1b4158: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b4158u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b415c: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b415cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b4160: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x1B4160u;
    {
        const bool branch_taken_0x1b4160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4160) {
            ctx->pc = 0x1B4710u;
            goto label_1b4710;
        }
    }
    ctx->pc = 0x1B4168u;
label_1b4168:
    // 0x1b4168: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b416c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1b4170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4174: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b4174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4178: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x1b4178u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x1b417c: 0x8e021228  lw          $v0, 0x1228($s0)
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4648)));
    // 0x1b4180: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b4180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b4184: 0x8e13121c  lw          $s3, 0x121C($s0)
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x1b4188: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b4188u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b418c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x1B418Cu;
    {
        const bool branch_taken_0x1b418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b418c) {
            ctx->pc = 0x1B46F0u;
            goto label_1b46f0;
        }
    }
    ctx->pc = 0x1B4194u;
label_1b4194:
    // 0x1b4194: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b4194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b4198: 0x1260015b  beqz        $s3, . + 4 + (0x15B << 2)
    ctx->pc = 0x1B4198u;
    {
        const bool branch_taken_0x1b4198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4198) {
            ctx->pc = 0x1B4708u;
            goto label_1b4708;
        }
    }
    ctx->pc = 0x1B41A0u;
    // 0x1b41a0: 0x2561006  srlv        $v0, $s6, $s2
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), GPR_U32(ctx, 18) & 0x1F));
    // 0x1b41a4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1b41a8: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x1B41A8u;
    {
        const bool branch_taken_0x1b41a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b41a8) {
            ctx->pc = 0x1B46E8u;
            goto label_1b46e8;
        }
    }
    ctx->pc = 0x1B41B0u;
    // 0x1b41b0: 0x2c01027  not         $v0, $s6
    ctx->pc = 0x1b41b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 22) | GPR_U64(ctx, 0)));
    // 0x1b41b4: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x1b41b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1b41b8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b41b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b41bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b41bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b41c0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b41c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b41c4: 0x14400148  bnez        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x1B41C4u;
    {
        const bool branch_taken_0x1b41c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41c4) {
            ctx->pc = 0x1B46E8u;
            goto label_1b46e8;
        }
    }
    ctx->pc = 0x1B41CCu;
    // 0x1b41cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b41ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b41d0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b41d4: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x1b41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1b41d8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b41dc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b41e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b41e4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b41e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b41e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B41E8u;
    SET_GPR_U32(ctx, 31, 0x1B41F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B41F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B41F0u) { return; }
    ctx->pc = 0x1B41F0u;
label_1b41f0:
    // 0x1b41f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b41f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b41f8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b41fc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B41FCu;
    SET_GPR_U32(ctx, 31, 0x1B4204u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B41FCu, 0x1B4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4204u;
label_1b4204:
    // 0x1b4204: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4208: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b420c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b420cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4210: 0x0  nop
    ctx->pc = 0x1b4210u;
    // NOP
    // 0x1b4214: 0x45000134  bc1f        . + 4 + (0x134 << 2)
    ctx->pc = 0x1B4214u;
    {
        const bool branch_taken_0x1b4214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4214) {
            ctx->pc = 0x1B46E8u;
            goto label_1b46e8;
        }
    }
    ctx->pc = 0x1B421Cu;
    // 0x1b421c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4220: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b4220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b4224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4228: 0x0  nop
    ctx->pc = 0x1b4228u;
    // NOP
    // 0x1b422c: 0x4501012e  bc1t        . + 4 + (0x12E << 2)
    ctx->pc = 0x1B422Cu;
    {
        const bool branch_taken_0x1b422c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b422c) {
            ctx->pc = 0x1B46E8u;
            goto label_1b46e8;
        }
    }
    ctx->pc = 0x1B4234u;
    // 0x1b4234: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1b4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4238: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b423c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b423cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4240: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1b4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4244: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4248: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b4248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b424c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b424cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b4250: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B4250u;
    SET_GPR_U32(ctx, 31, 0x1B4258u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B4250u, 0x1B4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4258u;
label_1b4258:
    // 0x1b4258: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b4258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b425c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4260: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b4260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4264: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1b4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4268: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b426c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b4270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4274: 0x0  nop
    ctx->pc = 0x1b4274u;
    // NOP
    // 0x1b4278: 0x4500011b  bc1f        . + 4 + (0x11B << 2)
    ctx->pc = 0x1B4278u;
    {
        const bool branch_taken_0x1b4278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4278) {
            ctx->pc = 0x1B46E8u;
            goto label_1b46e8;
        }
    }
    ctx->pc = 0x1B4280u;
    // 0x1b4280: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4284: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1B4284u;
    {
        const bool branch_taken_0x1b4284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4284) {
            ctx->pc = 0x1B4580u;
            goto label_1b4580;
        }
    }
    ctx->pc = 0x1B428Cu;
    // 0x1b428c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4290: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1b4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1b4294: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b4298: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b429c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1b429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1b42a0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b42a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b42a4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B42A4u;
    SET_GPR_U32(ctx, 31, 0x1B42ACu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B42A4u, 0x1B42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42ACu;
label_1b42ac:
    // 0x1b42ac: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1b42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b42b0: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1b42b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b42b4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B42B4u;
    SET_GPR_U32(ctx, 31, 0x1B42BCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B42B4u, 0x1B42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42BCu;
label_1b42bc:
    // 0x1b42bc: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b42bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b42c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b42c4: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b42c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b42c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b42c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b42cc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1b42ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1b42d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b42d4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B42D4u;
    {
        const bool branch_taken_0x1b42d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b42d4) {
            ctx->pc = 0x1B4354u;
            goto label_1b4354;
        }
    }
    ctx->pc = 0x1B42DCu;
    // 0x1b42dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b42e0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B42E0u;
    {
        const bool branch_taken_0x1b42e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b42e0) {
            ctx->pc = 0x1B4328u;
            goto label_1b4328;
        }
    }
    ctx->pc = 0x1B42E8u;
    // 0x1b42e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b42ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B42ECu;
    {
        const bool branch_taken_0x1b42ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b42ec) {
            ctx->pc = 0x1B42FCu;
            goto label_1b42fc;
        }
    }
    ctx->pc = 0x1B42F4u;
    // 0x1b42f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B4378u;
            goto label_1b4378;
        }
    }
    ctx->pc = 0x1B42FCu;
label_1b42fc:
    // 0x1b42fc: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4300: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b4304: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b4308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b430c: 0x0  nop
    ctx->pc = 0x1b430cu;
    // NOP
    // 0x1b4310: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b4310u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4314: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B4314u;
    SET_GPR_U32(ctx, 31, 0x1B431Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B4314u, 0x1B431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B431Cu;
label_1b431c:
    // 0x1b431c: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b431cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b4320: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B4320u;
    {
        const bool branch_taken_0x1b4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4320) {
            ctx->pc = 0x1B4378u;
            goto label_1b4378;
        }
    }
    ctx->pc = 0x1B4328u;
label_1b4328:
    // 0x1b4328: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b4328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b432c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b4330: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b4334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4338: 0x0  nop
    ctx->pc = 0x1b4338u;
    // NOP
    // 0x1b433c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b433cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4340: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B4340u;
    SET_GPR_U32(ctx, 31, 0x1B4348u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B4340u, 0x1B4348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4348u;
label_1b4348:
    // 0x1b4348: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b4348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b434c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B434Cu;
    {
        const bool branch_taken_0x1b434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b434c) {
            ctx->pc = 0x1B4378u;
            goto label_1b4378;
        }
    }
    ctx->pc = 0x1B4354u;
label_1b4354:
    // 0x1b4354: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4358: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b435c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b4360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4364: 0x0  nop
    ctx->pc = 0x1b4364u;
    // NOP
    // 0x1b4368: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b4368u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b436c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B436Cu;
    SET_GPR_U32(ctx, 31, 0x1B4374u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B436Cu, 0x1B4374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4374u;
label_1b4374:
    // 0x1b4374: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b4374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
label_1b4378:
    // 0x1b4378: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b437c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b437cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b4380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4384: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b4388: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1B4388u;
    {
        const bool branch_taken_0x1b4388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4388) {
            ctx->pc = 0x1B44D4u;
            goto label_1b44d4;
        }
    }
    ctx->pc = 0x1B4390u;
    // 0x1b4390: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b4390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b4394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4398: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b439c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B439Cu;
    {
        const bool branch_taken_0x1b439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b439c) {
            ctx->pc = 0x1B43C0u;
            goto label_1b43c0;
        }
    }
    ctx->pc = 0x1B43A4u;
    // 0x1b43a4: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b43a8: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b43a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b43ac: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b43b0: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b43b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b43b4: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b43b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b43b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B43B8u;
    {
        const bool branch_taken_0x1b43b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b43b8) {
            ctx->pc = 0x1B4408u;
            goto label_1b4408;
        }
    }
    ctx->pc = 0x1B43C0u;
label_1b43c0:
    // 0x1b43c0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b43c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b43c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b43c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b43cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b43d0: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1b43d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1b43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b43d8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b43dc: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b43dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b43e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b43e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b43e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b43ec: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b43f0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x1b43f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b43f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b43f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b43f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b43fc: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b43fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4400: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x1b4400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1b4404: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b4404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
label_1b4408:
    // 0x1b4408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b440c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b440cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4410: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1b4410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b4414: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b4414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4418: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b441c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b441cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b4420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4424: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b4428: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b442c: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1b4430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4434: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b4434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4438: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b4438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b443c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4440: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1b4440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1b4444: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b4444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4448: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b444c: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b444cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b4450: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4454: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b4454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b4458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b445c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b4460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4460u;
    {
        const bool branch_taken_0x1b4460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4460) {
            ctx->pc = 0x1B4478u;
            goto label_1b4478;
        }
    }
    ctx->pc = 0x1B4468u;
    // 0x1b4468: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b4468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b446c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b4470: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b4470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4474: 0x0  nop
    ctx->pc = 0x1b4474u;
    // NOP
label_1b4478:
    // 0x1b4478: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b4478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b447c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b447cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b4480: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b4480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b4484: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1B4484u;
    {
        const bool branch_taken_0x1b4484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4484) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B448Cu;
    // 0x1b448c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b4490: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x1b4490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x1b4494: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b4494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b449c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B449Cu;
    {
        const bool branch_taken_0x1b449c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b449c) {
            ctx->pc = 0x1B44C4u;
            goto label_1b44c4;
        }
    }
    ctx->pc = 0x1B44A4u;
    // 0x1b44a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B44A4u;
    {
        const bool branch_taken_0x1b44a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44a4) {
            ctx->pc = 0x1B44B4u;
            goto label_1b44b4;
        }
    }
    ctx->pc = 0x1B44ACu;
    // 0x1b44ac: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1B44ACu;
    {
        const bool branch_taken_0x1b44ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44ac) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B44B4u;
label_1b44b4:
    // 0x1b44b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b44b8: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b44b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b44bc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1B44BCu;
    {
        const bool branch_taken_0x1b44bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44bc) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B44C4u;
label_1b44c4:
    // 0x1b44c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b44c8: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b44c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b44cc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B44CCu;
    {
        const bool branch_taken_0x1b44cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44cc) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B44D4u;
label_1b44d4:
    // 0x1b44d4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b44d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b44d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b44d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b44dc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b44e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B44E0u;
    {
        const bool branch_taken_0x1b44e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44e0) {
            ctx->pc = 0x1B4504u;
            goto label_1b4504;
        }
    }
    ctx->pc = 0x1B44E8u;
    // 0x1b44e8: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b44ec: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b44ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b44f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b44f4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b44f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b44f8: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b44f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b44fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B44FCu;
    {
        const bool branch_taken_0x1b44fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44fc) {
            ctx->pc = 0x1B4520u;
            goto label_1b4520;
        }
    }
    ctx->pc = 0x1B4504u;
label_1b4504:
    // 0x1b4504: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4508: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b4508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b450c: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b450cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4510: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4514: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b4514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4518: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b4518u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b451c: 0x0  nop
    ctx->pc = 0x1b451cu;
    // NOP
label_1b4520:
    // 0x1b4520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4524: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b4524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4528: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1b4528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b452c: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b452cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4530: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4534: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b4534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b4538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b453c: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b453cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4540: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4544: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1b4544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1b4548: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b4548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b454c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4550: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b4550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b4554: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4558: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b4558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b455c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4560: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b4564: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B4564u;
    {
        const bool branch_taken_0x1b4564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4564) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B456Cu;
    // 0x1b456c: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b456cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b4570: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b4570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b4574: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b4574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4578: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B4578u;
    {
        const bool branch_taken_0x1b4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4578) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B4580u;
label_1b4580:
    // 0x1b4580: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b4584: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b4588: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b458c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1b4590: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b4594: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B4594u;
    SET_GPR_U32(ctx, 31, 0x1B459Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B4594u, 0x1B459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B459Cu;
label_1b459c:
    // 0x1b459c: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1b459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b45a0: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1b45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b45a4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B45A4u;
    SET_GPR_U32(ctx, 31, 0x1B45ACu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B45A4u, 0x1B45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45ACu;
label_1b45ac:
    // 0x1b45ac: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b45b0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b45b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b45b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b45b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b45b8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b45b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b45bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B45BCu;
    {
        const bool branch_taken_0x1b45bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b45bc) {
            ctx->pc = 0x1B45E0u;
            goto label_1b45e0;
        }
    }
    ctx->pc = 0x1B45C4u;
    // 0x1b45c4: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b45c8: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b45c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b45cc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b45d0: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b45d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b45d4: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b45d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b45d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B45D8u;
    {
        const bool branch_taken_0x1b45d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b45d8) {
            ctx->pc = 0x1B45F8u;
            goto label_1b45f8;
        }
    }
    ctx->pc = 0x1B45E0u;
label_1b45e0:
    // 0x1b45e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b45e4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b45e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b45e8: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b45e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b45ec: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b45f0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b45f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b45f4: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b45f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
label_1b45f8:
    // 0x1b45f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b45fc: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b45fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4600: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1b4600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b4604: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b4604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4608: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b460c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b460cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b4610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4614: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b4614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4618: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b461c: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1b461cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1b4620: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b4620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4624: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b4628: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b4628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b462c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b4630: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1b4630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1b4634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4638: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b463c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B463Cu;
    {
        const bool branch_taken_0x1b463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b463c) {
            ctx->pc = 0x1B4650u;
            goto label_1b4650;
        }
    }
    ctx->pc = 0x1B4644u;
    // 0x1b4644: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b4644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b4648: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b4648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b464c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b464cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
label_1b4650:
    // 0x1b4650: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4654: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b4658: 0xc040c24  jal         func_103090
    ctx->pc = 0x1B4658u;
    SET_GPR_U32(ctx, 31, 0x1B4660u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1B4660u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4660u) { return; }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4664: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b4664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4668: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x1b4668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b466c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B466Cu;
    SET_GPR_U32(ctx, 31, 0x1B4674u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B4674u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4674u) { return; }
    ctx->pc = 0x1B4674u;
label_1b4674:
    // 0x1b4674: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1b4678: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b4678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b467c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1b467cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b4680: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B4680u;
    SET_GPR_U32(ctx, 31, 0x1B4688u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B4680u, 0x1B4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4688u;
label_1b4688:
    // 0x1b4688: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b468c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1b468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4690: 0xe6001204  swc1        $f0, 0x1204($s0)
    ctx->pc = 0x1b4690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4612), bits); }
    // 0x1b4694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4698: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b4698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b469c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b469cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b46a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b46a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b46a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b46a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b46a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B46BCu;
            goto label_1b46bc;
        }
    }
    ctx->pc = 0x1B46B0u;
    // 0x1b46b0: 0x36940003  ori         $s4, $s4, 0x3
    ctx->pc = 0x1b46b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)3);
    // 0x1b46b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B46B4u;
    {
        const bool branch_taken_0x1b46b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46b4) {
            ctx->pc = 0x1B4708u;
            goto label_1b4708;
        }
    }
    ctx->pc = 0x1B46BCu;
label_1b46bc:
    // 0x1b46bc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b46bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b46c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b46c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b46c4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1b46c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1b46c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46C8u;
    {
        const bool branch_taken_0x1b46c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46c8) {
            ctx->pc = 0x1B46DCu;
            goto label_1b46dc;
        }
    }
    ctx->pc = 0x1B46D0u;
    // 0x1b46d0: 0x36940009  ori         $s4, $s4, 0x9
    ctx->pc = 0x1b46d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)9);
    // 0x1b46d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B46D4u;
    {
        const bool branch_taken_0x1b46d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46d4) {
            ctx->pc = 0x1B4708u;
            goto label_1b4708;
        }
    }
    ctx->pc = 0x1B46DCu;
label_1b46dc:
    // 0x1b46dc: 0x36940005  ori         $s4, $s4, 0x5
    ctx->pc = 0x1b46dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)5);
    // 0x1b46e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B46E0u;
    {
        const bool branch_taken_0x1b46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46e0) {
            ctx->pc = 0x1B4708u;
            goto label_1b4708;
        }
    }
    ctx->pc = 0x1B46E8u;
label_1b46e8:
    // 0x1b46e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b46ec: 0x0  nop
    ctx->pc = 0x1b46ecu;
    // NOP
label_1b46f0:
    // 0x1b46f0: 0x92021219  lbu         $v0, 0x1219($s0)
    ctx->pc = 0x1b46f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4633)));
    // 0x1b46f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b46f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b46f8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1b46f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b46fc: 0x1440fea5  bnez        $v0, . + 4 + (-0x15B << 2)
    ctx->pc = 0x1B46FCu;
    {
        const bool branch_taken_0x1b46fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b46fc) {
            ctx->pc = 0x1B4194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4194;
        }
    }
    ctx->pc = 0x1B4704u;
    // 0x1b4704: 0x0  nop
    ctx->pc = 0x1b4704u;
    // NOP
label_1b4708:
    // 0x1b4708: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b4708u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b470c: 0x0  nop
    ctx->pc = 0x1b470cu;
    // NOP
label_1b4710:
    // 0x1b4710: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b4714: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4718: 0x1440fe93  bnez        $v0, . + 4 + (-0x16D << 2)
    ctx->pc = 0x1B4718u;
    {
        const bool branch_taken_0x1b4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4718) {
            ctx->pc = 0x1B4168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4168;
        }
    }
    ctx->pc = 0x1B4720u;
    // 0x1b4720: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x1b4720u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b4724: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b4724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4728: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b4728u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b472c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b472cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4730: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b4730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4734: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b4734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4738: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b4738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b473c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b473cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b474c: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x1b474cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1b4750: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4758u;
}
