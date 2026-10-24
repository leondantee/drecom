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

// Function: Md_env_get_work
// Address: 0x2564d0 - 0x256a28
void Md_env_get_work_0x2564d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_env_get_work_0x2564d0");
#endif

    switch (ctx->pc) {
        case 0x25652cu: goto label_25652c;
        case 0x256624u: goto label_256624;
        case 0x25664cu: goto label_25664c;
        case 0x2567a8u: goto label_2567a8;
        case 0x2569a8u: goto label_2569a8;
        default: break;
    }

    ctx->pc = 0x2564d0u;

    // 0x2564d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2564d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2564d4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2564d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2564d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2564d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2564dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2564dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2564e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2564e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2564e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2564e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2564e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2564e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2564ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2564ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2564f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2564f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2564f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2564f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2564f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2564f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2564fc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x2564fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x256500: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x256500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x256504: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x256504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x256508: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x256508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x25650c: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x25650cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x256510: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256514: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x256514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256518: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25651c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25651cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256520: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256528: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x256528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_25652c:
    // 0x25652c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256530: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x256530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256534: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x256534u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256538: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25653c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x25653cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x256540: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256544: 0x3056000f  andi        $s6, $v0, 0xF
    ctx->pc = 0x256544u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256548: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x256548u;
    {
        const bool branch_taken_0x256548 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x256548) {
            ctx->pc = 0x256568u;
            goto label_256568;
        }
    }
    ctx->pc = 0x256550u;
    // 0x256550: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x256550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256554: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x256554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x256558: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25655c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256560: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x256560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256564: 0x0  nop
    ctx->pc = 0x256564u;
    // NOP
label_256568:
    // 0x256568: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25656c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256570: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x256570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x256574: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x256574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256578: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x256578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25657c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25657cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x256580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256584: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x256584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x256588: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25658c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x25658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256590: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256594: 0x3057000f  andi        $s7, $v0, 0xF
    ctx->pc = 0x256594u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256598: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x256598u;
    {
        const bool branch_taken_0x256598 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x256598) {
            ctx->pc = 0x2565B8u;
            goto label_2565b8;
        }
    }
    ctx->pc = 0x2565A0u;
    // 0x2565a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2565a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2565a4: 0x571823  subu        $v1, $v0, $s7
    ctx->pc = 0x2565a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2565a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2565a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2565acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2565b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2565b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2565b4: 0x0  nop
    ctx->pc = 0x2565b4u;
    // NOP
label_2565b8:
    // 0x2565b8: 0x8fb400d8  lw          $s4, 0xD8($sp)
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2565bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2565c0: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x2565c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x2565c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2565c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565c8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x2565c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2565cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2565ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2565d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2565d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2565d4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2565d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2565d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2565d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565dc: 0x305e000f  andi        $fp, $v0, 0xF
    ctx->pc = 0x2565dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2565e0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2565E0u;
    {
        const bool branch_taken_0x2565e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2565e0) {
            ctx->pc = 0x256600u;
            goto label_256600;
        }
    }
    ctx->pc = 0x2565E8u;
    // 0x2565e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2565ec: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x2565ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2565f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2565f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2565f8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2565f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2565fc: 0x0  nop
    ctx->pc = 0x2565fcu;
    // NOP
label_256600:
    // 0x256600: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256604: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x256604u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x256608: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x256608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25660c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256610: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x256610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x256614: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x256614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256618: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x256618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25661c: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x25661Cu;
    SET_GPR_U32(ctx, 31, 0x256624u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x25661Cu, 0x256624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256624u;
label_256624:
    // 0x256624: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256628: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x256628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25662c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x25662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256630: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x256630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256634: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256638: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x256638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x25663c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x25663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256640: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x256640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x256644: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x256644u;
    SET_GPR_U32(ctx, 31, 0x25664Cu);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x256644u, 0x25664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25664Cu;
label_25664c:
    // 0x25664c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x256650: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256654: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x256654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x256658: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x256658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25665c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256660: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x256660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x256664: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x256664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x256668: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25666c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x25666cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x256670: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256674: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x256674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x256678: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x256678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25667c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256680: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x256680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x256684: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x256684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x256688: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x256688u;
    {
        const bool branch_taken_0x256688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256688) {
            ctx->pc = 0x256760u;
            goto label_256760;
        }
    }
    ctx->pc = 0x256690u;
    // 0x256690: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x256690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256694: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x256694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x256698: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x256698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x25669c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x25669cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2566a0: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x2566a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x2566a4: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x2566a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x2566a8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x2566a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2566ac: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2566ACu;
    {
        const bool branch_taken_0x2566ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566ac) {
            ctx->pc = 0x256700u;
            goto label_256700;
        }
    }
    ctx->pc = 0x2566B4u;
    // 0x2566b4: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x2566b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x2566b8: 0x21a42  srl         $v1, $v0, 9
    ctx->pc = 0x2566b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x2566bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2566bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2566c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2566C0u;
    {
        const bool branch_taken_0x2566c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2566c0) {
            ctx->pc = 0x2566E4u;
            goto label_2566e4;
        }
    }
    ctx->pc = 0x2566C8u;
    // 0x2566c8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2566c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2566cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2566ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2566d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2566d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2566d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2566d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2566d8: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2566d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2566dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2566DCu;
    {
        const bool branch_taken_0x2566dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2566dc) {
            ctx->pc = 0x256760u;
            goto label_256760;
        }
    }
    ctx->pc = 0x2566E4u;
label_2566e4:
    // 0x2566e4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2566e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2566e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2566e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2566ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2566ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2566f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2566f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2566f4: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2566f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2566f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2566F8u;
    {
        const bool branch_taken_0x2566f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2566f8) {
            ctx->pc = 0x256760u;
            goto label_256760;
        }
    }
    ctx->pc = 0x256700u;
label_256700:
    // 0x256700: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x256700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x256704: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x256704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x256708: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256708u;
    {
        const bool branch_taken_0x256708 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x256708) {
            ctx->pc = 0x256724u;
            goto label_256724;
        }
    }
    ctx->pc = 0x256710u;
    // 0x256710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256714: 0x0  nop
    ctx->pc = 0x256714u;
    // NOP
    // 0x256718: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x256718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25671c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25671Cu;
    {
        const bool branch_taken_0x25671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25671c) {
            ctx->pc = 0x256740u;
            goto label_256740;
        }
    }
    ctx->pc = 0x256724u;
label_256724:
    // 0x256724: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x256724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x256728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25672c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25672cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256734: 0x0  nop
    ctx->pc = 0x256734u;
    // NOP
    // 0x256738: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x256738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25673c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25673cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_256740:
    // 0x256740: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x256740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x256744: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x256744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x256748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25674c: 0x0  nop
    ctx->pc = 0x25674cu;
    // NOP
    // 0x256750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x256750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x256754: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256758: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x256758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x25675c: 0x0  nop
    ctx->pc = 0x25675cu;
    // NOP
label_256760:
    // 0x256760: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256764: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x256764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x256768: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x256768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x25676c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x25676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256770: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x256774: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256778: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x256778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25677c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x25677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x256780: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x256780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x256784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256784u;
    {
        const bool branch_taken_0x256784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256784) {
            ctx->pc = 0x2567A8u;
            goto label_2567a8;
        }
    }
    ctx->pc = 0x25678Cu;
    // 0x25678c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x25678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256790: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x256794: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x256794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256798: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25679c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2567a0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2567a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2567a4: 0x0  nop
    ctx->pc = 0x2567a4u;
    // NOP
label_2567a8:
    // 0x2567a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2567ac: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2567acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2567b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2567b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2567b4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2567b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2567b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2567B8u;
    {
        const bool branch_taken_0x2567b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567b8) {
            ctx->pc = 0x2567D0u;
            goto label_2567d0;
        }
    }
    ctx->pc = 0x2567C0u;
    // 0x2567c0: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x2567c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x2567c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2567c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2567c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2567C8u;
    {
        const bool branch_taken_0x2567c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567c8) {
            ctx->pc = 0x2567D8u;
            goto label_2567d8;
        }
    }
    ctx->pc = 0x2567D0u;
label_2567d0:
    // 0x2567d0: 0x2402023c  addiu       $v0, $zero, 0x23C
    ctx->pc = 0x2567d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x2567d4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2567d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_2567d8:
    // 0x2567d8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2567d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2567dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2567dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2567e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2567e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2567e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2567e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2567e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2567e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2567ec: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x2567ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2567f0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2567f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2567f4: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x2567f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2567f8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x2567f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2567fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2567fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x256800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x256804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x256804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x256808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x256808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25680c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256810: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x256814: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x256814u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x256818: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25681c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x25681cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x256820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256828: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256828u;
    {
        const bool branch_taken_0x256828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256828) {
            ctx->pc = 0x256844u;
            goto label_256844;
        }
    }
    ctx->pc = 0x256830u;
    // 0x256830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x256830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256834: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256838: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x256838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x25683c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25683Cu;
    {
        const bool branch_taken_0x25683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25683c) {
            ctx->pc = 0x256878u;
            goto label_256878;
        }
    }
    ctx->pc = 0x256844u;
label_256844:
    // 0x256844: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256848: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x256848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x25684c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256850: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x256850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x256854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256854u;
    {
        const bool branch_taken_0x256854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256854) {
            ctx->pc = 0x256870u;
            goto label_256870;
        }
    }
    ctx->pc = 0x25685Cu;
    // 0x25685c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256860: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256864: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x256864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x256868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256868u;
    {
        const bool branch_taken_0x256868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256868) {
            ctx->pc = 0x256878u;
            goto label_256878;
        }
    }
    ctx->pc = 0x256870u;
label_256870:
    // 0x256870: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256874: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x256874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_256878:
    // 0x256878: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x256878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x25687c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25687Cu;
    {
        const bool branch_taken_0x25687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25687c) {
            ctx->pc = 0x2568B0u;
            goto label_2568b0;
        }
    }
    ctx->pc = 0x256884u;
    // 0x256884: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x256884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x256888: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x256888u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25688c: 0x2601827  not         $v1, $s3
    ctx->pc = 0x25688cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
    // 0x256890: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x256890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256894: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256898: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x256898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x25689c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x25689cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2568a0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x2568a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x2568a4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2568a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2568a8: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x2568a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x2568ac: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2568acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_2568b0:
    // 0x2568b0: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x2568b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x2568b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2568B4u;
    {
        const bool branch_taken_0x2568b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568b4) {
            ctx->pc = 0x2568F8u;
            goto label_2568f8;
        }
    }
    ctx->pc = 0x2568BCu;
    // 0x2568bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2568c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2568c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2568c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2568c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2568c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2568c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2568cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2568CCu;
    {
        const bool branch_taken_0x2568cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568cc) {
            ctx->pc = 0x2568E8u;
            goto label_2568e8;
        }
    }
    ctx->pc = 0x2568D4u;
    // 0x2568d4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2568d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2568dc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2568dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2568e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2568E0u;
    {
        const bool branch_taken_0x2568e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568e0) {
            ctx->pc = 0x2568F8u;
            goto label_2568f8;
        }
    }
    ctx->pc = 0x2568E8u;
label_2568e8:
    // 0x2568e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2568e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2568ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2568f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2568f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2568f4: 0x0  nop
    ctx->pc = 0x2568f4u;
    // NOP
label_2568f8:
    // 0x2568f8: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x2568f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x2568fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2568FCu;
    {
        const bool branch_taken_0x2568fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568fc) {
            ctx->pc = 0x256910u;
            goto label_256910;
        }
    }
    ctx->pc = 0x256904u;
    // 0x256904: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256908: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25690c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x25690cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_256910:
    // 0x256910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256914: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x256914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x256918: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x256918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25691c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x256920: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x256920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x256924: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x256924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256928: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x256928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x25692c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x25692cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x256930: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x256930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256934: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x256934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x256938: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x256938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x25693c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256940: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x256940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x256944: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x256944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x256948: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x256948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25694c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x25694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x256950: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x256950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x256954: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x256954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x256958: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x256958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25695c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x25695cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x256960: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256964: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x256964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x256968: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x256968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25696c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x25696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x256970: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x256974: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x256974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x256978: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x256978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25697c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x25697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x256980: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x256984: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x256984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x256988: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x256988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25698c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x256990: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x256994: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x256994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256998: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x256998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x25699c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25699cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2569a0: 0xc095c30  jal         func_2570C0
    ctx->pc = 0x2569A0u;
    SET_GPR_U32(ctx, 31, 0x2569A8u);
    ctx->pc = 0x2570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2570C0u, 0x2569A0u, 0x2569A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569A8u;
label_2569a8:
    // 0x2569a8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x2569a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2569ac: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2569b0: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2569b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2569b4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2569b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2569b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2569b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2569bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2569bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2569c0: 0x1c40ff79  bgtz        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x2569C0u;
    {
        const bool branch_taken_0x2569c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2569c0) {
            ctx->pc = 0x2567A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2567a8;
        }
    }
    ctx->pc = 0x2569C8u;
    // 0x2569c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2569cc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2569d0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2569d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2569d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2569d8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2569dc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2569dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2569e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2569e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2569e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2569e8: 0x1440fed0  bnez        $v0, . + 4 + (-0x130 << 2)
    ctx->pc = 0x2569E8u;
    {
        const bool branch_taken_0x2569e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2569e8) {
            ctx->pc = 0x25652Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25652c;
        }
    }
    ctx->pc = 0x2569F0u;
    // 0x2569f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2569f4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2569f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2569f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2569f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2569fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2569fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256a00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x256a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256a04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256a08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256a0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256a1c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x256a20: 0x3e00008  jr          $ra
    ctx->pc = 0x256A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A28u;
}
