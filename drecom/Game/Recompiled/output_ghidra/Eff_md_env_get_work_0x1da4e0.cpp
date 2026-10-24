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

// Function: Eff_md_env_get_work
// Address: 0x1da4e0 - 0x1daac4
void Eff_md_env_get_work_0x1da4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_env_get_work_0x1da4e0");
#endif

    switch (ctx->pc) {
        case 0x1da53cu: goto label_1da53c;
        case 0x1da634u: goto label_1da634;
        case 0x1da65cu: goto label_1da65c;
        case 0x1da7b8u: goto label_1da7b8;
        case 0x1daa44u: goto label_1daa44;
        default: break;
    }

    ctx->pc = 0x1da4e0u;

    // 0x1da4e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1da4e4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1da4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1da4e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1da4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1da4ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1da4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1da4f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1da4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1da4f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1da4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1da4f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1da4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1da4fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1da4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da50c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1da50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1da510: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1da510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1da514: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x1da514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x1da518: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x1da518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x1da51c: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x1da51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x1da520: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da524: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1da524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da52c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1da52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1da530: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da538: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1da538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_1da53c:
    // 0x1da53c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da540: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1da540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da544: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1da544u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da548: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da54c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da550: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da554: 0x3056000f  andi        $s6, $v0, 0xF
    ctx->pc = 0x1da554u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da558: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA558u;
    {
        const bool branch_taken_0x1da558 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da558) {
            ctx->pc = 0x1DA578u;
            goto label_1da578;
        }
    }
    ctx->pc = 0x1DA560u;
    // 0x1da560: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da564: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x1da564u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1da568: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da570: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da574: 0x0  nop
    ctx->pc = 0x1da574u;
    // NOP
label_1da578:
    // 0x1da578: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da57c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da580: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x1da580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x1da584: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1da584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da588: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x1da588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1da58c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1da590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da594: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da598: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1da59c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da5a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5a4: 0x3057000f  andi        $s7, $v0, 0xF
    ctx->pc = 0x1da5a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da5a8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA5A8u;
    {
        const bool branch_taken_0x1da5a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5a8) {
            ctx->pc = 0x1DA5C8u;
            goto label_1da5c8;
        }
    }
    ctx->pc = 0x1DA5B0u;
    // 0x1da5b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da5b4: 0x571823  subu        $v1, $v0, $s7
    ctx->pc = 0x1da5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1da5b8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da5c0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da5c4: 0x0  nop
    ctx->pc = 0x1da5c4u;
    // NOP
label_1da5c8:
    // 0x1da5c8: 0x8fb400d8  lw          $s4, 0xD8($sp)
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da5d0: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x1da5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x1da5d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5d8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1da5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1da5dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da5e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da5e4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da5e8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5ec: 0x305e000f  andi        $fp, $v0, 0xF
    ctx->pc = 0x1da5ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da5f0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA5F0u;
    {
        const bool branch_taken_0x1da5f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5f0) {
            ctx->pc = 0x1DA610u;
            goto label_1da610;
        }
    }
    ctx->pc = 0x1DA5F8u;
    // 0x1da5f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da5fc: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x1da5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1da600: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da608: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da60c: 0x0  nop
    ctx->pc = 0x1da60cu;
    // NOP
label_1da610:
    // 0x1da610: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da614: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1da618: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da61c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da620: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1da620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1da624: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1da624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da628: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1da628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da62c: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x1DA62Cu;
    SET_GPR_U32(ctx, 31, 0x1DA634u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x1DA62Cu, 0x1DA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA634u;
label_1da634:
    // 0x1da634: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da638: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1da638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1da63c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da640: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da644: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da648: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1da648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1da64c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da650: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1da650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da654: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x1DA654u;
    SET_GPR_U32(ctx, 31, 0x1DA65Cu);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x1DA654u, 0x1DA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA65Cu;
label_1da65c:
    // 0x1da65c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1da65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da660: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da664: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x1da664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x1da668: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1da668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da66c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da670: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1da670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x1da674: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1da674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da678: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da67c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1da67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1da680: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da684: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x1da684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x1da688: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1da688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1da68c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da690: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x1da690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x1da694: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da698: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DA698u;
    {
        const bool branch_taken_0x1da698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da698) {
            ctx->pc = 0x1DA770u;
            goto label_1da770;
        }
    }
    ctx->pc = 0x1DA6A0u;
    // 0x1da6a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1da6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da6a4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1da6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1da6a8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1da6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1da6ac: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1da6acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da6b0: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da6b4: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1da6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1da6b8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x1da6b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1da6bc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA6BCu;
    {
        const bool branch_taken_0x1da6bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da6bc) {
            ctx->pc = 0x1DA710u;
            goto label_1da710;
        }
    }
    ctx->pc = 0x1DA6C4u;
    // 0x1da6c4: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da6c8: 0x21a42  srl         $v1, $v0, 9
    ctx->pc = 0x1da6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1da6cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1da6d0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA6D0u;
    {
        const bool branch_taken_0x1da6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da6d0) {
            ctx->pc = 0x1DA6F4u;
            goto label_1da6f4;
        }
    }
    ctx->pc = 0x1DA6D8u;
    // 0x1da6d8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1da6dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1da6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1da6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da6e4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da6e8: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1da6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1da6ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA6ECu;
    {
        const bool branch_taken_0x1da6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da6ec) {
            ctx->pc = 0x1DA770u;
            goto label_1da770;
        }
    }
    ctx->pc = 0x1DA6F4u;
label_1da6f4:
    // 0x1da6f4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1da6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1da6f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1da6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1da6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da700: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da704: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1da704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1da708: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DA708u;
    {
        const bool branch_taken_0x1da708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da708) {
            ctx->pc = 0x1DA770u;
            goto label_1da770;
        }
    }
    ctx->pc = 0x1DA710u;
label_1da710:
    // 0x1da710: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da714: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1da714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1da718: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA718u;
    {
        const bool branch_taken_0x1da718 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1da718) {
            ctx->pc = 0x1DA734u;
            goto label_1da734;
        }
    }
    ctx->pc = 0x1DA720u;
    // 0x1da720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da724: 0x0  nop
    ctx->pc = 0x1da724u;
    // NOP
    // 0x1da728: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da72c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA72Cu;
    {
        const bool branch_taken_0x1da72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da72c) {
            ctx->pc = 0x1DA750u;
            goto label_1da750;
        }
    }
    ctx->pc = 0x1DA734u;
label_1da734:
    // 0x1da734: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1da734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1da738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1da73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1da73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1da740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da744: 0x0  nop
    ctx->pc = 0x1da744u;
    // NOP
    // 0x1da748: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da74c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1da74cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1da750:
    // 0x1da750: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1da754: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1da754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1da758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da75c: 0x0  nop
    ctx->pc = 0x1da75cu;
    // NOP
    // 0x1da760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1da760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1da764: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da768: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1da768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1da76c: 0x0  nop
    ctx->pc = 0x1da76cu;
    // NOP
label_1da770:
    // 0x1da770: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da774: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1da774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1da778: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da77c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da780: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1da780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1da784: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da788: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1da788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da78c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1da78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1da790: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1da790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1da794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA794u;
    {
        const bool branch_taken_0x1da794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da794) {
            ctx->pc = 0x1DA7B8u;
            goto label_1da7b8;
        }
    }
    ctx->pc = 0x1DA79Cu;
    // 0x1da79c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1da79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da7a0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1da7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1da7a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1da7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da7a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da7b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da7b4: 0x0  nop
    ctx->pc = 0x1da7b4u;
    // NOP
label_1da7b8:
    // 0x1da7b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da7bc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da7c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da7c4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1da7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1da7c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA7C8u;
    {
        const bool branch_taken_0x1da7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7c8) {
            ctx->pc = 0x1DA7E0u;
            goto label_1da7e0;
        }
    }
    ctx->pc = 0x1DA7D0u;
    // 0x1da7d0: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x1da7d4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da7d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1DA7D8u;
    {
        const bool branch_taken_0x1da7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7d8) {
            ctx->pc = 0x1DA850u;
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA7E0u;
label_1da7e0:
    // 0x1da7e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da7e4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da7e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da7ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1da7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1da7f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA7F0u;
    {
        const bool branch_taken_0x1da7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7f0) {
            ctx->pc = 0x1DA828u;
            goto label_1da828;
        }
    }
    ctx->pc = 0x1DA7F8u;
    // 0x1da7f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1da7fc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1da7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1da800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA800u;
    {
        const bool branch_taken_0x1da800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da800) {
            ctx->pc = 0x1DA818u;
            goto label_1da818;
        }
    }
    ctx->pc = 0x1DA808u;
    // 0x1da808: 0x2402025c  addiu       $v0, $zero, 0x25C
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1da80c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da80cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da810: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DA810u;
    {
        const bool branch_taken_0x1da810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da810) {
            ctx->pc = 0x1DA850u;
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA818u;
label_1da818:
    // 0x1da818: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1da81c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da81cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da820: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA820u;
    {
        const bool branch_taken_0x1da820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da820) {
            ctx->pc = 0x1DA850u;
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA828u;
label_1da828:
    // 0x1da828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1da828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1da82c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1da82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1da830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA830u;
    {
        const bool branch_taken_0x1da830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da830) {
            ctx->pc = 0x1DA848u;
            goto label_1da848;
        }
    }
    ctx->pc = 0x1DA838u;
    // 0x1da838: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x1da838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x1da83c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da83cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA840u;
    {
        const bool branch_taken_0x1da840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da840) {
            ctx->pc = 0x1DA850u;
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA848u;
label_1da848:
    // 0x1da848: 0x2402023c  addiu       $v0, $zero, 0x23C
    ctx->pc = 0x1da848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x1da84c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da84cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_1da850:
    // 0x1da850: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1da850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1da854: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1da854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1da858: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1da85c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1da860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da864: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x1da864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1da868: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da868u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da86c: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x1da86cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da870: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1da874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da878: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1da87c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1da87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1da880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1da880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1da884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1da884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1da888: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1da888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1da88c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da88cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da890: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da894: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da89c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1da8a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA8A0u;
    {
        const bool branch_taken_0x1da8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8a0) {
            ctx->pc = 0x1DA8BCu;
            goto label_1da8bc;
        }
    }
    ctx->pc = 0x1DA8A8u;
    // 0x1da8a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1da8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1da8ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da8b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da8b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DA8B4u;
    {
        const bool branch_taken_0x1da8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8b4) {
            ctx->pc = 0x1DA8F8u;
            goto label_1da8f8;
        }
    }
    ctx->pc = 0x1DA8BCu;
label_1da8bc:
    // 0x1da8bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da8c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da8c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da8c8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1da8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1da8cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA8CCu;
    {
        const bool branch_taken_0x1da8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8cc) {
            ctx->pc = 0x1DA8E8u;
            goto label_1da8e8;
        }
    }
    ctx->pc = 0x1DA8D4u;
    // 0x1da8d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1da8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da8d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da8dc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da8e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA8E0u;
    {
        const bool branch_taken_0x1da8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8e0) {
            ctx->pc = 0x1DA8F8u;
            goto label_1da8f8;
        }
    }
    ctx->pc = 0x1DA8E8u;
label_1da8e8:
    // 0x1da8e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da8ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da8f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da8f4: 0x0  nop
    ctx->pc = 0x1da8f4u;
    // NOP
label_1da8f8:
    // 0x1da8f8: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1da8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1da8fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA8FCu;
    {
        const bool branch_taken_0x1da8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8fc) {
            ctx->pc = 0x1DA950u;
            goto label_1da950;
        }
    }
    ctx->pc = 0x1DA904u;
    // 0x1da904: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1da904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da908: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x1da908u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da90c: 0x2601827  not         $v1, $s3
    ctx->pc = 0x1da90cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
    // 0x1da910: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1da910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1da914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1da918: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da918u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da91c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1da91cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da920: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1da920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1da924: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1da924u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1da928: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1da928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1da92c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1da92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1da930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA930u;
    {
        const bool branch_taken_0x1da930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da930) {
            ctx->pc = 0x1DA948u;
            goto label_1da948;
        }
    }
    ctx->pc = 0x1DA938u;
    // 0x1da938: 0x2402025c  addiu       $v0, $zero, 0x25C
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1da93c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da93cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA940u;
    {
        const bool branch_taken_0x1da940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da940) {
            ctx->pc = 0x1DA950u;
            goto label_1da950;
        }
    }
    ctx->pc = 0x1DA948u;
label_1da948:
    // 0x1da948: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x1da948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1da94c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da94cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_1da950:
    // 0x1da950: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x1da950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x1da954: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA954u;
    {
        const bool branch_taken_0x1da954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da954) {
            ctx->pc = 0x1DA990u;
            goto label_1da990;
        }
    }
    ctx->pc = 0x1DA95Cu;
    // 0x1da95c: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA960u;
    {
        const bool branch_taken_0x1da960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da960) {
            ctx->pc = 0x1DA97Cu;
            goto label_1da97c;
        }
    }
    ctx->pc = 0x1DA968u;
    // 0x1da968: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1da96c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da970: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DA974u;
    {
        const bool branch_taken_0x1da974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da974) {
            ctx->pc = 0x1DA9A8u;
            goto label_1da9a8;
        }
    }
    ctx->pc = 0x1DA97Cu;
label_1da97c:
    // 0x1da97c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1da980: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da984: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA988u;
    {
        const bool branch_taken_0x1da988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da988) {
            ctx->pc = 0x1DA9A8u;
            goto label_1da9a8;
        }
    }
    ctx->pc = 0x1DA990u;
label_1da990:
    // 0x1da990: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da994: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA994u;
    {
        const bool branch_taken_0x1da994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da994) {
            ctx->pc = 0x1DA9A8u;
            goto label_1da9a8;
        }
    }
    ctx->pc = 0x1DA99Cu;
    // 0x1da99c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da9a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da9a4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1da9a8:
    // 0x1da9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da9ac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1da9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1da9b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1da9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da9b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1da9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1da9b8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1da9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1da9bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1da9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1da9c0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1da9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1da9c4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1da9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1da9c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1da9cc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1da9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1da9d0: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1da9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1da9d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1da9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1da9d8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1da9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1da9dc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1da9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x1da9e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1da9e4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1da9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1da9e8: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1da9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1da9ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1da9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1da9f0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1da9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1da9f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1da9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1da9f8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1da9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1da9fc: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1da9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1daa00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1daa04: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1daa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1daa08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1daa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1daa0c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1daa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1daa10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1daa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1daa14: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1daa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1daa18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1daa1c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1daa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1daa20: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1daa24: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1daa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1daa28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1daa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1daa2c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1daa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1daa30: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x1daa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1daa34: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1daa34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1daa38: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1daa38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1daa3c: 0xc076ab4  jal         func_1DAAD0
    ctx->pc = 0x1DAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA44u);
    ctx->pc = 0x1DAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAAD0u, 0x1DAA3Cu, 0x1DAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA44u;
label_1daa44:
    // 0x1daa44: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1daa44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1daa48: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1daa48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1daa4c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1daa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1daa50: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1daa50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daa54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daa58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daa5c: 0x1c40ff56  bgtz        $v0, . + 4 + (-0xAA << 2)
    ctx->pc = 0x1DAA5Cu;
    {
        const bool branch_taken_0x1daa5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1daa5c) {
            ctx->pc = 0x1DA7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7b8;
        }
    }
    ctx->pc = 0x1DAA64u;
    // 0x1daa64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1daa68: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1daa6c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1daa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1daa70: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1daa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1daa74: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1daa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1daa78: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1daa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1daa7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1daa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1daa80: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1daa80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1daa84: 0x1440fead  bnez        $v0, . + 4 + (-0x153 << 2)
    ctx->pc = 0x1DAA84u;
    {
        const bool branch_taken_0x1daa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa84) {
            ctx->pc = 0x1DA53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da53c;
        }
    }
    ctx->pc = 0x1DAA8Cu;
    // 0x1daa8c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1daa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1daa90: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1daa90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1daa94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1daa94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1daa98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1daa98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1daa9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1daa9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1daaa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1daaa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1daaa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1daaa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1daaa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1daaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1daaac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1daaacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1daab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1daab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daab8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1daab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1daabc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAC4u;
}
