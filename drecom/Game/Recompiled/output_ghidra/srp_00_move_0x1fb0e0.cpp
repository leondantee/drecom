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

// Function: srp_00_move
// Address: 0x1fb0e0 - 0x1fbc30
void srp_00_move_0x1fb0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_00_move_0x1fb0e0");
#endif

    switch (ctx->pc) {
        case 0x1fb130u: goto label_1fb130;
        case 0x1fb164u: goto label_1fb164;
        case 0x1fb1c0u: goto label_1fb1c0;
        case 0x1fb1e0u: goto label_1fb1e0;
        case 0x1fb228u: goto label_1fb228;
        case 0x1fb27cu: goto label_1fb27c;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb324u: goto label_1fb324;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb51cu: goto label_1fb51c;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb7ecu: goto label_1fb7ec;
        case 0x1fb984u: goto label_1fb984;
        case 0x1fb9bcu: goto label_1fb9bc;
        case 0x1fba4cu: goto label_1fba4c;
        case 0x1fbaa0u: goto label_1fbaa0;
        case 0x1fbb48u: goto label_1fbb48;
        case 0x1fbb50u: goto label_1fbb50;
        case 0x1fbb88u: goto label_1fbb88;
        case 0x1fbbc0u: goto label_1fbbc0;
        default: break;
    }

    ctx->pc = 0x1fb0e0u;

    // 0x1fb0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fb0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fb0e4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1fb0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fb0e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fb0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fb0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb0f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb0f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb0f8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1fb0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1fb0fc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1fb0fcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb100: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1fb100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb104: 0x96030340  lhu         $v1, 0x340($s0)
    ctx->pc = 0x1fb104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x1fb108: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fb10c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fb10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fb110: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FB110u;
    {
        const bool branch_taken_0x1fb110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb110) {
            ctx->pc = 0x1FB190u;
            goto label_1fb190;
        }
    }
    ctx->pc = 0x1FB118u;
    // 0x1fb118: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb11c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb120: 0x248403c0  addiu       $a0, $a0, 0x3C0
    ctx->pc = 0x1fb120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x1fb124: 0x8c650324  lw          $a1, 0x324($v1)
    ctx->pc = 0x1fb124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1fb128: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FB128u;
    SET_GPR_U32(ctx, 31, 0x1FB130u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FB130u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB130u) { return; }
    ctx->pc = 0x1FB130u;
label_1fb130:
    // 0x1fb130: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1fb130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb134: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb138: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1fb138u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb13c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb140: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb144: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb148: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb14c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb150: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb154: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x1fb154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1fb158: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x1fb158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1fb15c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FB15Cu;
    SET_GPR_U32(ctx, 31, 0x1FB164u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FB164u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB164u) { return; }
    ctx->pc = 0x1FB164u;
label_1fb164:
    // 0x1fb164: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb164u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb168: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1fb168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb16c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb16cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb170: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb174: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb178: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb17c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb180: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1fb180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb184: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb188: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fb188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fb18c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fb18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb190:
    // 0x1fb190: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb194: 0x94640340  lhu         $a0, 0x340($v1)
    ctx->pc = 0x1fb194u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fb198: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1fb198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fb19c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1fb19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fb1a0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB1A0u;
    {
        const bool branch_taken_0x1fb1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1a0) {
            ctx->pc = 0x1FB1F8u;
            goto label_1fb1f8;
        }
    }
    ctx->pc = 0x1FB1A8u;
    // 0x1fb1a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1b0: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1fb1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1fb1b4: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x1fb1b8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FB1B8u;
    SET_GPR_U32(ctx, 31, 0x1FB1C0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FB1C0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB1C0u) { return; }
    ctx->pc = 0x1FB1C0u;
label_1fb1c0:
    // 0x1fb1c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb1c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb1c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1d0: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x1fb1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x1fb1d4: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1fb1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fb1d8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FB1D8u;
    SET_GPR_U32(ctx, 31, 0x1FB1E0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FB1E0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB1E0u) { return; }
    ctx->pc = 0x1FB1E0u;
label_1fb1e0:
    // 0x1fb1e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb1e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb1e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb1e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb1ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1f0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fb1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fb1f4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fb1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb1f8:
    // 0x1fb1f8: 0x12600081  beqz        $s3, . + 4 + (0x81 << 2)
    ctx->pc = 0x1FB1F8u;
    {
        const bool branch_taken_0x1fb1f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1f8) {
            ctx->pc = 0x1FB400u;
            goto label_1fb400;
        }
    }
    ctx->pc = 0x1FB200u;
    // 0x1fb200: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb204: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb208: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb20c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1fb20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fb210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb214: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb218: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb21c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb220: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FB220u;
    SET_GPR_U32(ctx, 31, 0x1FB228u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FB220u, 0x1FB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB228u;
label_1fb228:
    // 0x1fb228: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb228u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb22c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb230: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fb230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb234: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB234u;
    {
        const bool branch_taken_0x1fb234 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fb234) {
            ctx->pc = 0x1FB250u;
            goto label_1fb250;
        }
    }
    ctx->pc = 0x1FB23Cu;
    // 0x1fb23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb240: 0x0  nop
    ctx->pc = 0x1fb240u;
    // NOP
    // 0x1fb244: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb248: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB248u;
    {
        const bool branch_taken_0x1fb248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb248) {
            ctx->pc = 0x1FB26Cu;
            goto label_1fb26c;
        }
    }
    ctx->pc = 0x1FB250u;
label_1fb250:
    // 0x1fb250: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fb254: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fb254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fb258: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fb258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fb25c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fb25cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb260: 0x0  nop
    ctx->pc = 0x1fb260u;
    // NOP
    // 0x1fb264: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb268: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fb268u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fb26c:
    // 0x1fb26c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb270: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb274: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FB274u;
    SET_GPR_U32(ctx, 31, 0x1FB27Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FB27Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB27Cu) { return; }
    ctx->pc = 0x1FB27Cu;
label_1fb27c:
    // 0x1fb27c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb27cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb280: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fb280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb288: 0x0  nop
    ctx->pc = 0x1fb288u;
    // NOP
    // 0x1fb28c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fb28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fb290: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fb290u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb298: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fb298u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fb29c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1FB29Cu;
    {
        const bool branch_taken_0x1fb29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb29c) {
            ctx->pc = 0x1FB388u;
            goto label_1fb388;
        }
    }
    ctx->pc = 0x1FB2A4u;
label_1fb2a4:
    // 0x1fb2a4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fb2a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb2b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2b8: 0x24660140  addiu       $a2, $v1, 0x140
    ctx->pc = 0x1fb2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x1fb2bc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FB2BCu;
    SET_GPR_U32(ctx, 31, 0x1FB2C4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FB2BCu, 0x1FB2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2C4u;
label_1fb2c4:
    // 0x1fb2c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb2c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb2c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb2cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb2d4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1fb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fb2d8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb2dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2e0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1fb2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fb2e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2e8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FB2E8u;
    SET_GPR_U32(ctx, 31, 0x1FB2F0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FB2E8u, 0x1FB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2F0u;
label_1fb2f0:
    // 0x1fb2f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb2f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb2f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2f8: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb2fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb304: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb308: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1fb308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb30c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb310: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb314: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb31c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FB31Cu;
    SET_GPR_U32(ctx, 31, 0x1FB324u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FB31Cu, 0x1FB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB324u;
label_1fb324:
    // 0x1fb324: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb328: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fb328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb32c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fb32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb330: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fb334: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB334u;
    {
        const bool branch_taken_0x1fb334 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fb334) {
            ctx->pc = 0x1FB350u;
            goto label_1fb350;
        }
    }
    ctx->pc = 0x1FB33Cu;
    // 0x1fb33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb340: 0x0  nop
    ctx->pc = 0x1fb340u;
    // NOP
    // 0x1fb344: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb348: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB348u;
    {
        const bool branch_taken_0x1fb348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb348) {
            ctx->pc = 0x1FB36Cu;
            goto label_1fb36c;
        }
    }
    ctx->pc = 0x1FB350u;
label_1fb350:
    // 0x1fb350: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fb350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fb354: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fb354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fb358: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fb358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fb35c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb360: 0x0  nop
    ctx->pc = 0x1fb360u;
    // NOP
    // 0x1fb364: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb368: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fb368u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fb36c:
    // 0x1fb36c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb370: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb374: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FB374u;
    SET_GPR_U32(ctx, 31, 0x1FB37Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FB37Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB37Cu) { return; }
    ctx->pc = 0x1FB37Cu;
label_1fb37c:
    // 0x1fb37c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fb37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fb380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb384: 0x0  nop
    ctx->pc = 0x1fb384u;
    // NOP
label_1fb388:
    // 0x1fb388: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb38c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x1fb38cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb390: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb394: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fb394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fb398: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1FB398u;
    {
        const bool branch_taken_0x1fb398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb398) {
            ctx->pc = 0x1FB2A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb2a4;
        }
    }
    ctx->pc = 0x1FB3A0u;
    // 0x1fb3a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb3a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb3a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB3A4u;
    {
        const bool branch_taken_0x1fb3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3a4) {
            ctx->pc = 0x1FB3E8u;
            goto label_1fb3e8;
        }
    }
    ctx->pc = 0x1FB3ACu;
label_1fb3ac:
    // 0x1fb3ac: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3b0: 0x90c30345  lbu         $v1, 0x345($a2)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 837)));
    // 0x1fb3b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb3b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb3bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb3c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb3c8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fb3c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb3cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb3d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb3d8: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fb3dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb3e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb3e4: 0x0  nop
    ctx->pc = 0x1fb3e4u;
    // NOP
label_1fb3e8:
    // 0x1fb3e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3ec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fb3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb3f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb3f4: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1fb3f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb3f8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FB3F8u;
    {
        const bool branch_taken_0x1fb3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3f8) {
            ctx->pc = 0x1FB3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb3ac;
        }
    }
    ctx->pc = 0x1FB400u;
label_1fb400:
    // 0x1fb400: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1fb400u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb404: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1FB404u;
    {
        const bool branch_taken_0x1fb404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb404) {
            ctx->pc = 0x1FBB20u;
            goto label_1fbb20;
        }
    }
    ctx->pc = 0x1FB40Cu;
label_1fb40c:
    // 0x1fb40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb410: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x1fb410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fb414: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb418: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb41c: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb420: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb424: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1fb424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb428: 0x1020010f  beqz        $at, . + 4 + (0x10F << 2)
    ctx->pc = 0x1FB428u;
    {
        const bool branch_taken_0x1fb428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb428) {
            ctx->pc = 0x1FB868u;
            goto label_1fb868;
        }
    }
    ctx->pc = 0x1FB430u;
    // 0x1fb430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb434: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x1fb434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1fb438: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb43c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb440: 0x10a400bd  beq         $a1, $a0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1FB440u;
    {
        const bool branch_taken_0x1fb440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fb440) {
            ctx->pc = 0x1FB738u;
            goto label_1fb738;
        }
    }
    ctx->pc = 0x1FB448u;
    // 0x1fb448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb44c: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1FB44Cu;
    {
        const bool branch_taken_0x1fb44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb44c) {
            ctx->pc = 0x1FB528u;
            goto label_1fb528;
        }
    }
    ctx->pc = 0x1FB454u;
    // 0x1fb454: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB454u;
    {
        const bool branch_taken_0x1fb454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb454) {
            ctx->pc = 0x1FB464u;
            goto label_1fb464;
        }
    }
    ctx->pc = 0x1FB45Cu;
    // 0x1fb45c: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x1FB45Cu;
    {
        const bool branch_taken_0x1fb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb45c) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB464u;
label_1fb464:
    // 0x1fb464: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb468: 0x90620346  lbu         $v0, 0x346($v1)
    ctx->pc = 0x1fb468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb470: 0xa0620346  sb          $v0, 0x346($v1)
    ctx->pc = 0x1fb470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb474: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb478: 0x90620348  lbu         $v0, 0x348($v1)
    ctx->pc = 0x1fb478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb47c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb480: 0xa0620348  sb          $v0, 0x348($v1)
    ctx->pc = 0x1fb480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb484: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb488: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x1fb488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x1fb48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb490: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fb494: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1fb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1fb498: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fb498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb49c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4a0: 0xa043034b  sb          $v1, 0x34B($v0)
    ctx->pc = 0x1fb4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb4a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4a8: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1fb4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fb4ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb4b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fb4b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb4bc: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1fb4bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb4c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4c4: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x1fb4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x1fb4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb4cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fb4d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb4d8: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x1fb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1fb4dc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1fb4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1fb4e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4e4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fb4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fb4e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fb4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb4ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb4f0: 0x90820346  lbu         $v0, 0x346($a0)
    ctx->pc = 0x1fb4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fb4f4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1fb4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb4f8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1fb4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb4fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB4FCu;
    {
        const bool branch_taken_0x1fb4fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4fc) {
            ctx->pc = 0x1FB510u;
            goto label_1fb510;
        }
    }
    ctx->pc = 0x1FB504u;
    // 0x1fb504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb50c: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb50cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
label_1fb510:
    // 0x1fb510: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb514: 0xc07f4e0  jal         func_1FD380
    ctx->pc = 0x1FB514u;
    SET_GPR_U32(ctx, 31, 0x1FB51Cu);
    ctx->pc = 0x1FD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD380u, 0x1FB514u, 0x1FB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB51Cu;
label_1fb51c:
    // 0x1fb51c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb51cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb520: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1FB520u;
    {
        const bool branch_taken_0x1fb520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb520) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB528u;
label_1fb528:
    // 0x1fb528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb52c: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fb52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fb530: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb534: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fb538: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB538u;
    {
        const bool branch_taken_0x1fb538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fb538) {
            ctx->pc = 0x1FB558u;
            goto label_1fb558;
        }
    }
    ctx->pc = 0x1FB540u;
    // 0x1fb540: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb544: 0x9065034f  lbu         $a1, 0x34F($v1)
    ctx->pc = 0x1fb544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fb548: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fb548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb54c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x1fb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1fb550: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FB550u;
    {
        const bool branch_taken_0x1fb550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fb550) {
            ctx->pc = 0x1FB640u;
            goto label_1fb640;
        }
    }
    ctx->pc = 0x1FB558u;
label_1fb558:
    // 0x1fb558: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb55c: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1fb560: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FB560u;
    {
        const bool branch_taken_0x1fb560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb560) {
            ctx->pc = 0x1FB628u;
            goto label_1fb628;
        }
    }
    ctx->pc = 0x1FB568u;
    // 0x1fb568: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb56c: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x1fb56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fb570: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb574: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x1fb574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb578: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb57c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fb57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb580: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb584: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1fb584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fb588: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fb58c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb590: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb594: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fb594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb598: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1fb598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb59c: 0x92030345  lbu         $v1, 0x345($s0)
    ctx->pc = 0x1fb59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 837)));
    // 0x1fb5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb5a4: 0xa2030345  sb          $v1, 0x345($s0)
    ctx->pc = 0x1fb5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb5a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb5a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb5ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB5ACu;
    {
        const bool branch_taken_0x1fb5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb5ac) {
            ctx->pc = 0x1FB5F0u;
            goto label_1fb5f0;
        }
    }
    ctx->pc = 0x1FB5B4u;
label_1fb5b4:
    // 0x1fb5b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb5b8: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fb5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb5bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb5c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb5c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb5c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb5cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb5d0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fb5d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb5d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb5d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb5dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb5e0: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb5e4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb5e8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb5ec: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fb5ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1fb5f0:
    // 0x1fb5f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb5f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fb5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fb5f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb5fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fb5fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb600: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FB600u;
    {
        const bool branch_taken_0x1fb600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb600) {
            ctx->pc = 0x1FB5B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb5b4;
        }
    }
    ctx->pc = 0x1FB608u;
    // 0x1fb608: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb60c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb610: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb614: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1fb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fb618: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb61c: 0xac640364  sw          $a0, 0x364($v1)
    ctx->pc = 0x1fb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 868), GPR_U32(ctx, 4));
    // 0x1fb620: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x1FB620u;
    {
        const bool branch_taken_0x1fb620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb620) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB628u;
label_1fb628:
    // 0x1fb628: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb62c: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fb62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fb630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb634: 0xac830364  sw          $v1, 0x364($a0)
    ctx->pc = 0x1fb634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 3));
    // 0x1fb638: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1FB638u;
    {
        const bool branch_taken_0x1fb638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb638) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB640u;
label_1fb640:
    // 0x1fb640: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb644: 0x9083034f  lbu         $v1, 0x34F($a0)
    ctx->pc = 0x1fb644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1fb648: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb64c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb650: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x1fb650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb654: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb658: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fb658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fb65c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb660: 0x90830347  lbu         $v1, 0x347($a0)
    ctx->pc = 0x1fb660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 839)));
    // 0x1fb664: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb668: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1fb668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb66c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FB66Cu;
    {
        const bool branch_taken_0x1fb66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb66c) {
            ctx->pc = 0x1FB720u;
            goto label_1fb720;
        }
    }
    ctx->pc = 0x1FB674u;
    // 0x1fb674: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1fb674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb678: 0x92030348  lbu         $v1, 0x348($s0)
    ctx->pc = 0x1fb678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x1fb67c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb680: 0xa2030348  sb          $v1, 0x348($s0)
    ctx->pc = 0x1fb680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb684: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb688: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fb688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb68c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb690: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1fb690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fb694: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x1fb694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fb698: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fb698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb69c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6a0: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fb6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb6a4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6a8: 0x90a30345  lbu         $v1, 0x345($a1)
    ctx->pc = 0x1fb6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fb6ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fb6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb6b0: 0xa0a40345  sb          $a0, 0x345($a1)
    ctx->pc = 0x1fb6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb6b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb6b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb6b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FB6B8u;
    {
        const bool branch_taken_0x1fb6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6b8) {
            ctx->pc = 0x1FB6F8u;
            goto label_1fb6f8;
        }
    }
    ctx->pc = 0x1FB6C0u;
label_1fb6c0:
    // 0x1fb6c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6c4: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1fb6c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb6c8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1fb6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb6cc: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1fb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1fb6d0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb6d4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6d8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1fb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fb6dc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fb6dcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb6e0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb6e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb6ec: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb6f0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb6f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb6f8:
    // 0x1fb6f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6fc: 0x90730348  lbu         $s3, 0x348($v1)
    ctx->pc = 0x1fb6fcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb700: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1fb700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1fb704: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fb704u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb708: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FB708u;
    {
        const bool branch_taken_0x1fb708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb708) {
            ctx->pc = 0x1FB6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb6c0;
        }
    }
    ctx->pc = 0x1FB710u;
    // 0x1fb710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb718: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb71c: 0x0  nop
    ctx->pc = 0x1fb71cu;
    // NOP
label_1fb720:
    // 0x1fb720: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb724: 0x90a4034f  lbu         $a0, 0x34F($a1)
    ctx->pc = 0x1fb724u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 847)));
    // 0x1fb728: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb72c: 0xa0a3034f  sb          $v1, 0x34F($a1)
    ctx->pc = 0x1fb72cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb730: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x1FB730u;
    {
        const bool branch_taken_0x1fb730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb730) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB738u;
label_1fb738:
    // 0x1fb738: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb73c: 0x9085034f  lbu         $a1, 0x34F($a0)
    ctx->pc = 0x1fb73cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1fb740: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb744: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1fb744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1fb748: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB748u;
    {
        const bool branch_taken_0x1fb748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fb748) {
            ctx->pc = 0x1FB7A0u;
            goto label_1fb7a0;
        }
    }
    ctx->pc = 0x1FB750u;
    // 0x1fb750: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb754: 0x3c053f75  lui         $a1, 0x3F75
    ctx->pc = 0x1fb754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16245 << 16));
    // 0x1fb758: 0x34a4c28f  ori         $a0, $a1, 0xC28F
    ctx->pc = 0x1fb758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49807);
    // 0x1fb75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fb75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb760: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1fb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb764: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb768: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1fb768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x1fb76c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb770: 0x8cc30364  lw          $v1, 0x364($a2)
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 868)));
    // 0x1fb774: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb778: 0xacc30364  sw          $v1, 0x364($a2)
    ctx->pc = 0x1fb778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 868), GPR_U32(ctx, 3));
    // 0x1fb77c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb780: 0x8c730364  lw          $s3, 0x364($v1)
    ctx->pc = 0x1fb780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1fb784: 0x166000e4  bnez        $s3, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1FB784u;
    {
        const bool branch_taken_0x1fb784 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb784) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB78Cu;
    // 0x1fb78c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb794: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fb794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fb798: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x1FB798u;
    {
        const bool branch_taken_0x1fb798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb798) {
            ctx->pc = 0x1FBB38u;
            goto label_1fbb38;
        }
    }
    ctx->pc = 0x1FB7A0u;
label_1fb7a0:
    // 0x1fb7a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7a4: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fb7a8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1fb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb7ac: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1fb7acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb7b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7b4: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1fb7b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fb7b8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1fb7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb7bc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fb7c0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fb7c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb7c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7cc: 0xa083034b  sb          $v1, 0x34B($a0)
    ctx->pc = 0x1fb7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb7d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7d4: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1fb7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb7d8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1fb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb7dc: 0xa0650345  sb          $a1, 0x345($v1)
    ctx->pc = 0x1fb7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb7e0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb7e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb7e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB7E4u;
    {
        const bool branch_taken_0x1fb7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb7e4) {
            ctx->pc = 0x1FB828u;
            goto label_1fb828;
        }
    }
    ctx->pc = 0x1FB7ECu;
label_1fb7ec:
    // 0x1fb7ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7f0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fb7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb7f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb7f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb7fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb800: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb804: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb808: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x1fb808u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb80c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1fb80cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb810: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb814: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1fb814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fb818: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fb818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fb81c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb81cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb820: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1fb820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb824: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1fb824u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1fb828:
    // 0x1fb828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb82c: 0x90650348  lbu         $a1, 0x348($v1)
    ctx->pc = 0x1fb82cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb830: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb834: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fb834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb838: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FB838u;
    {
        const bool branch_taken_0x1fb838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb838) {
            ctx->pc = 0x1FB7ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb7ec;
        }
    }
    ctx->pc = 0x1FB840u;
    // 0x1fb840: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb844: 0x90c50348  lbu         $a1, 0x348($a2)
    ctx->pc = 0x1fb844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1fb848: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb84c: 0x146000b2  bnez        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1FB84Cu;
    {
        const bool branch_taken_0x1fb84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb84c) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB854u;
    // 0x1fb854: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb85c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fb85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fb860: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1FB860u;
    {
        const bool branch_taken_0x1fb860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb860) {
            ctx->pc = 0x1FBB38u;
            goto label_1fbb38;
        }
    }
    ctx->pc = 0x1FB868u;
label_1fb868:
    // 0x1fb868: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb86c: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x1fb86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1fb870: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb878: 0x10850076  beq         $a0, $a1, . + 4 + (0x76 << 2)
    ctx->pc = 0x1FB878u;
    {
        const bool branch_taken_0x1fb878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fb878) {
            ctx->pc = 0x1FBA54u;
            goto label_1fba54;
        }
    }
    ctx->pc = 0x1FB880u;
    // 0x1fb880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb884: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FB884u;
    {
        const bool branch_taken_0x1fb884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb884) {
            ctx->pc = 0x1FB990u;
            goto label_1fb990;
        }
    }
    ctx->pc = 0x1FB88Cu;
    // 0x1fb88c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB88Cu;
    {
        const bool branch_taken_0x1fb88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb88c) {
            ctx->pc = 0x1FB89Cu;
            goto label_1fb89c;
        }
    }
    ctx->pc = 0x1FB894u;
    // 0x1fb894: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1FB894u;
    {
        const bool branch_taken_0x1fb894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb894) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB89Cu;
label_1fb89c:
    // 0x1fb89c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8a0: 0x90460346  lbu         $a2, 0x346($v0)
    ctx->pc = 0x1fb8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x1fb8a4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1fb8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fb8a8: 0xa0440346  sb          $a0, 0x346($v0)
    ctx->pc = 0x1fb8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb8ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8b0: 0x90430348  lbu         $v1, 0x348($v0)
    ctx->pc = 0x1fb8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x1fb8b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb8b8: 0xa0430348  sb          $v1, 0x348($v0)
    ctx->pc = 0x1fb8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb8bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8c0: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x1fb8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x1fb8c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fb8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb8c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1fb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fb8cc: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x1fb8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1fb8d0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1fb8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb8d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8d8: 0xa045034b  sb          $a1, 0x34B($v0)
    ctx->pc = 0x1fb8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 843), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb8dc: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1fb8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8e0: 0x92300346  lbu         $s0, 0x346($s1)
    ctx->pc = 0x1fb8e0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 838)));
    // 0x1fb8e4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1fb8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1fb8e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb8ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb8f4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1fb8f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb8fc: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fb8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb904: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb908: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb90c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb910: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb914: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1fb914u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1fb918: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb91c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fb91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fb920: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb924: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb928: 0x90700347  lbu         $s0, 0x347($v1)
    ctx->pc = 0x1fb928u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fb92c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1fb92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1fb930: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1fb930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb934: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB934u;
    {
        const bool branch_taken_0x1fb934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb934) {
            ctx->pc = 0x1FB948u;
            goto label_1fb948;
        }
    }
    ctx->pc = 0x1FB93Cu;
    // 0x1fb93c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb944: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb944u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
label_1fb948:
    // 0x1fb948: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb94c: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1fb94cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb950: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fb950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb958: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fb958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb95c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb960: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fb960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb964: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB964u;
    {
        const bool branch_taken_0x1fb964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb964) {
            ctx->pc = 0x1FB978u;
            goto label_1fb978;
        }
    }
    ctx->pc = 0x1FB96Cu;
    // 0x1fb96c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb970: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb974: 0xa0a30abc  sb          $v1, 0xABC($a1)
    ctx->pc = 0x1fb974u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2748), (uint8_t)GPR_U32(ctx, 3));
label_1fb978:
    // 0x1fb978: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb97c: 0xc07f4e0  jal         func_1FD380
    ctx->pc = 0x1FB97Cu;
    SET_GPR_U32(ctx, 31, 0x1FB984u);
    ctx->pc = 0x1FD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD380u, 0x1FB97Cu, 0x1FB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB984u;
label_1fb984:
    // 0x1fb984: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb984u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb988: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1FB988u;
    {
        const bool branch_taken_0x1fb988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb988) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FB990u;
label_1fb990:
    // 0x1fb990: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb994: 0x90620346  lbu         $v0, 0x346($v1)
    ctx->pc = 0x1fb994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb99c: 0xa0620346  sb          $v0, 0x346($v1)
    ctx->pc = 0x1fb99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb9a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9a4: 0x90620345  lbu         $v0, 0x345($v1)
    ctx->pc = 0x1fb9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb9a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb9ac: 0xa0620345  sb          $v0, 0x345($v1)
    ctx->pc = 0x1fb9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb9b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb9b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb9b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB9B4u;
    {
        const bool branch_taken_0x1fb9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9b4) {
            ctx->pc = 0x1FB9F8u;
            goto label_1fb9f8;
        }
    }
    ctx->pc = 0x1FB9BCu;
label_1fb9bc:
    // 0x1fb9bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9c0: 0x90420345  lbu         $v0, 0x345($v0)
    ctx->pc = 0x1fb9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 837)));
    // 0x1fb9c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb9c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fb9cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fb9d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb9d8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1fb9d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb9dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb9e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb9e8: 0x24620480  addiu       $v0, $v1, 0x480
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb9ec: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1fb9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1fb9f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb9f4: 0x0  nop
    ctx->pc = 0x1fb9f4u;
    // NOP
label_1fb9f8:
    // 0x1fb9f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9fc: 0x90820348  lbu         $v0, 0x348($a0)
    ctx->pc = 0x1fb9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fba00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fba04: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1fba04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fba08: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FBA08u;
    {
        const bool branch_taken_0x1fba08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba08) {
            ctx->pc = 0x1FB9BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb9bc;
        }
    }
    ctx->pc = 0x1FBA10u;
    // 0x1fba10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba14: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fba14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fba18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fba18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fba1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba20: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x1fba20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x1fba24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fba28: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1fba28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fba2c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBA2Cu;
    {
        const bool branch_taken_0x1fba2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba2c) {
            ctx->pc = 0x1FBA40u;
            goto label_1fba40;
        }
    }
    ctx->pc = 0x1FBA34u;
    // 0x1fba34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fba38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba3c: 0xa0620abc  sb          $v0, 0xABC($v1)
    ctx->pc = 0x1fba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 2));
label_1fba40:
    // 0x1fba40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba44: 0xc07f4e0  jal         func_1FD380
    ctx->pc = 0x1FBA44u;
    SET_GPR_U32(ctx, 31, 0x1FBA4Cu);
    ctx->pc = 0x1FD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD380u, 0x1FBA44u, 0x1FBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA4Cu;
label_1fba4c:
    // 0x1fba4c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FBA4Cu;
    {
        const bool branch_taken_0x1fba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba4c) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FBA54u;
label_1fba54:
    // 0x1fba54: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba58: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1fba58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fba5c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1fba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fba60: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1fba60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fba64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba68: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fba68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fba6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fba70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fba74: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fba78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fba78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fba7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba80: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fba80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fba84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fba84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba88: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1fba88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fba8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fba90: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1fba90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fba94: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fba94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fba98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FBA98u;
    {
        const bool branch_taken_0x1fba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba98) {
            ctx->pc = 0x1FBAD8u;
            goto label_1fbad8;
        }
    }
    ctx->pc = 0x1FBAA0u;
label_1fbaa0:
    // 0x1fbaa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbaa4: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fbaa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fbaa8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fbaa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbaac: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1fbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1fbab0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fbab4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbabc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fbabcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbac0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbac4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbac8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbacc: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fbad0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fbad0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fbad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fbad8:
    // 0x1fbad8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbadc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fbadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fbae0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fbae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbae4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fbae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fbae8: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FBAE8u;
    {
        const bool branch_taken_0x1fbae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbae8) {
            ctx->pc = 0x1FBAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbaa0;
        }
    }
    ctx->pc = 0x1FBAF0u;
    // 0x1fbaf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbaf4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fbaf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fbaf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fbaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbafc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBAFCu;
    {
        const bool branch_taken_0x1fbafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbafc) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FBB04u;
    // 0x1fbb04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbb08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb0c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fbb10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBB10u;
    {
        const bool branch_taken_0x1fbb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb10) {
            ctx->pc = 0x1FBB38u;
            goto label_1fbb38;
        }
    }
    ctx->pc = 0x1FBB18u;
label_1fbb18:
    // 0x1fbb18: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fbb1c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1fbb1cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1fbb20:
    // 0x1fbb20: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fbb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb24: 0x90a402a8  lbu         $a0, 0x2A8($a1)
    ctx->pc = 0x1fbb24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x1fbb28: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fbb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fbb2c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1fbb2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbb30: 0x1460fe36  bnez        $v1, . + 4 + (-0x1CA << 2)
    ctx->pc = 0x1FBB30u;
    {
        const bool branch_taken_0x1fbb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb30) {
            ctx->pc = 0x1FB40Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb40c;
        }
    }
    ctx->pc = 0x1FBB38u;
label_1fbb38:
    // 0x1fbb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb3c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fbb3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fbb40: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FBB40u;
    {
        const bool branch_taken_0x1fbb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb40) {
            ctx->pc = 0x1FBBF8u;
            goto label_1fbbf8;
        }
    }
    ctx->pc = 0x1FBB48u;
label_1fbb48:
    // 0x1fbb48: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBB48u;
    SET_GPR_U32(ctx, 31, 0x1FBB50u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBB48u, 0x1FBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB50u;
label_1fbb50:
    // 0x1fbb50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb54: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fbb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbb58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbb5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbb60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbb68: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x1fbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbb6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbb70: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbb74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbb7c: 0xe4800480  swc1        $f0, 0x480($a0)
    ctx->pc = 0x1fbb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1152), bits); }
    // 0x1fbb80: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBB80u;
    SET_GPR_U32(ctx, 31, 0x1FBB88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBB80u, 0x1FBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB88u;
label_1fbb88:
    // 0x1fbb88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb8c: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fbb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbb90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbb90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbb94: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbb98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbba0: 0xc4600484  lwc1        $f0, 0x484($v1)
    ctx->pc = 0x1fbba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbba8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbbac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbb0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fbbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbbb4: 0xe4a00484  swc1        $f0, 0x484($a1)
    ctx->pc = 0x1fbbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1156), bits); }
    // 0x1fbbb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBBB8u;
    SET_GPR_U32(ctx, 31, 0x1FBBC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBBB8u, 0x1FBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBC0u;
label_1fbbc0:
    // 0x1fbbc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbc4: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fbbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbbc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbbc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbbcc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbbd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbd4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fbbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbbd8: 0xc4a00488  lwc1        $f0, 0x488($a1)
    ctx->pc = 0x1fbbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbbdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbbe0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbbe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbbec: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x1fbbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x1fbbf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fbbf4: 0x0  nop
    ctx->pc = 0x1fbbf4u;
    // NOP
label_1fbbf8:
    // 0x1fbbf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbfc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fbbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fbc00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fbc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbc04: 0x203202b  sltu        $a0, $s0, $v1
    ctx->pc = 0x1fbc04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbc08: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1FBC08u;
    {
        const bool branch_taken_0x1fbc08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc08) {
            ctx->pc = 0x1FBB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbb48;
        }
    }
    ctx->pc = 0x1FBC10u;
    // 0x1fbc10: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1fbc10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbc14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbc14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbc18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbc18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbc1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbc24: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fbc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fbc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC30u;
}
