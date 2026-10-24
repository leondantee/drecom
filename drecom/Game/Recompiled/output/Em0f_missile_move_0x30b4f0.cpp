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

// Function: Em0f_missile_move
// Address: 0x30b4f0 - 0x30b928
void Em0f_missile_move_0x30b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_missile_move_0x30b4f0");
#endif

    switch (ctx->pc) {
        case 0x30b52cu: goto label_30b52c;
        case 0x30b5bcu: goto label_30b5bc;
        case 0x30b5e0u: goto label_30b5e0;
        case 0x30b610u: goto label_30b610;
        case 0x30b63cu: goto label_30b63c;
        case 0x30b648u: goto label_30b648;
        case 0x30b660u: goto label_30b660;
        case 0x30b6d8u: goto label_30b6d8;
        case 0x30b700u: goto label_30b700;
        case 0x30b70cu: goto label_30b70c;
        case 0x30b734u: goto label_30b734;
        case 0x30b740u: goto label_30b740;
        case 0x30b770u: goto label_30b770;
        case 0x30b7f8u: goto label_30b7f8;
        case 0x30b840u: goto label_30b840;
        case 0x30b89cu: goto label_30b89c;
        case 0x30b8e4u: goto label_30b8e4;
        case 0x30b8f0u: goto label_30b8f0;
        default: break;
    }

    ctx->pc = 0x30b4f0u;

    // 0x30b4f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x30b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30b4f4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x30b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x30b4f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30b4fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30b500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b50c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x30b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x30b510: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x30b510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x30b514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30b514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b518: 0x0  nop
    ctx->pc = 0x30b518u;
    // NOP
    // 0x30b51c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x30b51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x30b520: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x30b520u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b524: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x30B524u;
    {
        const bool branch_taken_0x30b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b524) {
            ctx->pc = 0x30B8F8u;
            goto label_30b8f8;
        }
    }
    ctx->pc = 0x30B52Cu;
label_30b52c:
    // 0x30b52c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x30b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30b530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b534: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x30b534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x30b538: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x30b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30b53c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30b540: 0x106000eb  beqz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x30B540u;
    {
        const bool branch_taken_0x30b540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b540) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B548u;
    // 0x30b548: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b54c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b550: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30b554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b55c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30b560: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b564: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30b564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30b568: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30b56c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b570: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b574: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30b578: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x30b578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b57c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b580: 0x24441340  addiu       $a0, $v0, 0x1340
    ctx->pc = 0x30b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x30b584: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x30b584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30b588: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30b588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30b58c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b594: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30b594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b598: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x30b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b59c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x30b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b5a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30b5a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30b5a4: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x30b5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x30b5a8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x30b5a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x30b5ac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b5acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b5b0: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x30b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x30b5b4: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x30B5B4u;
    SET_GPR_U32(ctx, 31, 0x30B5BCu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x30B5B4u, 0x30B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5BCu;
label_30b5bc:
    // 0x30b5bc: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x30b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30b5c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30b5c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b5c4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x30b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b5c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30b5cc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x30b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30b5d0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x30b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30b5d4: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x30b5d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x30b5d8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x30B5D8u;
    SET_GPR_U32(ctx, 31, 0x30B5E0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x30B5D8u, 0x30B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5E0u;
label_30b5e0:
    // 0x30b5e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30b5e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30b5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30b5e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b5ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30b5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30b5f0: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x30b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x30b5f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30b5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30b5f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30b5f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b5fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30b5fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b600: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x30b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30b604: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30b604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b608: 0xc086488  jal         func_219220
    ctx->pc = 0x30B608u;
    SET_GPR_U32(ctx, 31, 0x30B610u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30B608u, 0x30B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B610u;
label_30b610:
    // 0x30b610: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x30b610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x30b614: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b618: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b61c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b620: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b624: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30b624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b628: 0x24042f01  addiu       $a0, $zero, 0x2F01
    ctx->pc = 0x30b628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12033));
    // 0x30b62c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30b62cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b630: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30b630u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b634: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30B634u;
    SET_GPR_U32(ctx, 31, 0x30B63Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30B634u, 0x30B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B63Cu;
label_30b63c:
    // 0x30b63c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30b63cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30b640: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30B640u;
    SET_GPR_U32(ctx, 31, 0x30B648u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30B640u, 0x30B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B648u;
label_30b648:
    // 0x30b648: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30b64c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x30b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b650: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x30b650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30b654: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x30b654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x30b658: 0xc059e1c  jal         func_167870
    ctx->pc = 0x30B658u;
    SET_GPR_U32(ctx, 31, 0x30B660u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x30B658u, 0x30B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B660u;
label_30b660:
    // 0x30b660: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30b660u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30b664: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x30B664u;
    {
        const bool branch_taken_0x30b664 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b664) {
            ctx->pc = 0x30B740u;
            goto label_30b740;
        }
    }
    ctx->pc = 0x30B66Cu;
    // 0x30b66c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b670: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b674: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x30b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x30b678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b67c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b680: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30b680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30b684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b688: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30b688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b68c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b690: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b694: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30b694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b698: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x30b698u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b69c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b6a0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x30b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x30b6a4: 0x402027  not         $a0, $v0
    ctx->pc = 0x30b6a4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x30b6a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b6ac: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30b6b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30b6b4: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30b6b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b6bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b6c0: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30b6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b6c8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b6cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b6d0: 0xc0c45a8  jal         func_3116A0
    ctx->pc = 0x30B6D0u;
    SET_GPR_U32(ctx, 31, 0x30B6D8u);
    ctx->pc = 0x3116A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3116A0u, 0x30B6D0u, 0x30B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6D8u;
label_30b6d8:
    // 0x30b6d8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30b6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b6e0: 0x0  nop
    ctx->pc = 0x30b6e0u;
    // NOP
    // 0x30b6e4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x30b6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30b6e8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x30b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x30b6ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30b6ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b6f0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x30b6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30b6f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x30b6f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b6f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30B6F8u;
    SET_GPR_U32(ctx, 31, 0x30B700u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30B6F8u, 0x30B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B700u;
label_30b700:
    // 0x30b700: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30b700u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30b704: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30B704u;
    SET_GPR_U32(ctx, 31, 0x30B70Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30B704u, 0x30B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B70Cu;
label_30b70c:
    // 0x30b70c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30b710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b714: 0x0  nop
    ctx->pc = 0x30b714u;
    // NOP
    // 0x30b718: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x30b718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30b71c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x30b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x30b720: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30b720u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b724: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x30b724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30b728: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x30b728u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b72c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30B72Cu;
    SET_GPR_U32(ctx, 31, 0x30B734u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30B72Cu, 0x30B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B734u;
label_30b734:
    // 0x30b734: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30b734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30b738: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30B738u;
    SET_GPR_U32(ctx, 31, 0x30B740u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30B738u, 0x30B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B740u;
label_30b740:
    // 0x30b740: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b744: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x30b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x30b748: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x30b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b74c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30b74cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3998E0u));
    // 0x30b750: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30b750u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30b754: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b758: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b75c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b760: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30b760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30b764: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30b768: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30B768u;
    SET_GPR_U32(ctx, 31, 0x30B770u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30B768u, 0x30B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B770u;
label_30b770:
    // 0x30b770: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x30B770u;
    {
        const bool branch_taken_0x30b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b770) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B778u;
    // 0x30b778: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b77c: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x30b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x30b780: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x30b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30b784: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30b784u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3998F0u));
    // 0x30b788: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30b788u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30b78c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b790: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b794: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x30b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x30b798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b79c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b7a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30b7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b7a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b7ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b7b0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b7b4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30b7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b7b8: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x30b7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b7bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b7c0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x30b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x30b7c4: 0x402027  not         $a0, $v0
    ctx->pc = 0x30b7c4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x30b7c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b7cc: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30b7d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30b7d4: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30b7d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30b7dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30b7e0: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30b7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b7e8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b7ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b7f0: 0xc0c45a8  jal         func_3116A0
    ctx->pc = 0x30B7F0u;
    SET_GPR_U32(ctx, 31, 0x30B7F8u);
    ctx->pc = 0x3116A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3116A0u, 0x30B7F0u, 0x30B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B7F8u;
label_30b7f8:
    // 0x30b7f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30b7fc: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x30b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30b800: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30b800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b804: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b808: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b80c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b814: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b81c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x30b81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x30b820: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30b820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30b824: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30b824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30b828: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b82c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30b830: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x30b830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x30b834: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30b834u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b838: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30B838u;
    SET_GPR_U32(ctx, 31, 0x30B840u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30B838u, 0x30B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B840u;
label_30b840:
    // 0x30b840: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30b844: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30b844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30b848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b84c: 0x0  nop
    ctx->pc = 0x30b84cu;
    // NOP
    // 0x30b850: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x30b850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x30b854: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30b858: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x30b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30b85c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30b85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b860: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b864: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b868: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b878: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x30b878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x30b87c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30b880: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30b880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30b884: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b888: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30b888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30b88c: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x30b88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x30b890: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30b890u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b894: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30B894u;
    SET_GPR_U32(ctx, 31, 0x30B89Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30B894u, 0x30B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B89Cu;
label_30b89c:
    // 0x30b89c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x30b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x30b8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b8a4: 0x0  nop
    ctx->pc = 0x30b8a4u;
    // NOP
    // 0x30b8a8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x30b8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30b8ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30b8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30b8b0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30b8b4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x30b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x30b8b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b8bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b8c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30b8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30b8c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b8cc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30b8ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b8d0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x30b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x30b8d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30b8d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30b8d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b8dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30B8DCu;
    SET_GPR_U32(ctx, 31, 0x30B8E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30B8DCu, 0x30B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8E4u;
label_30b8e4:
    // 0x30b8e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30b8e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30b8e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30B8E8u;
    SET_GPR_U32(ctx, 31, 0x30B8F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30B8E8u, 0x30B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8F0u;
label_30b8f0:
    // 0x30b8f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30b8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30b8f4: 0x0  nop
    ctx->pc = 0x30b8f4u;
    // NOP
label_30b8f8:
    // 0x30b8f8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x30b8f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30b8fc: 0x1460ff0b  bnez        $v1, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x30B8FCu;
    {
        const bool branch_taken_0x30b8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b8fc) {
            ctx->pc = 0x30B52Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b52c;
        }
    }
    ctx->pc = 0x30B904u;
    // 0x30b904: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x30b904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30b908: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30b908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b90c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b90cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b91c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x30b91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30b920: 0x3e00008  jr          $ra
    ctx->pc = 0x30B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B928u;
}
