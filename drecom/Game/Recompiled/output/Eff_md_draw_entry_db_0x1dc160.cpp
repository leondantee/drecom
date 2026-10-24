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

// Function: Eff_md_draw_entry_db
// Address: 0x1dc160 - 0x1dc678
void Eff_md_draw_entry_db_0x1dc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_draw_entry_db_0x1dc160");
#endif

    switch (ctx->pc) {
        case 0x1dc23cu: goto label_1dc23c;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc2e4u: goto label_1dc2e4;
        case 0x1dc364u: goto label_1dc364;
        case 0x1dc3e0u: goto label_1dc3e0;
        case 0x1dc468u: goto label_1dc468;
        case 0x1dc4b0u: goto label_1dc4b0;
        case 0x1dc510u: goto label_1dc510;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc60cu: goto label_1dc60c;
        default: break;
    }

    ctx->pc = 0x1dc160u;

    // 0x1dc160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dc160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc164: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1dc164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1dc168: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc16c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc17c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1dc17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1dc180: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc184: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc188: 0x8c740014  lw          $s4, 0x14($v1)
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dc18c: 0x148143  sra         $s0, $s4, 5
    ctx->pc = 0x1dc18cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 5));
    // 0x1dc190: 0x600011e  bltz        $s0, . + 4 + (0x11E << 2)
    ctx->pc = 0x1DC190u;
    {
        const bool branch_taken_0x1dc190 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1dc190) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC198u;
    // 0x1dc198: 0x2a010400  slti        $at, $s0, 0x400
    ctx->pc = 0x1dc198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1dc19c: 0x1020011b  beqz        $at, . + 4 + (0x11B << 2)
    ctx->pc = 0x1DC19Cu;
    {
        const bool branch_taken_0x1dc19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc19c) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC1A4u;
    // 0x1dc1a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc1a8: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1dc1a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc1ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dc1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc1b0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1dc1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1dc1b4: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1DC1B4u;
    {
        const bool branch_taken_0x1dc1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1b4) {
            ctx->pc = 0x1DC3E8u;
            goto label_1dc3e8;
        }
    }
    ctx->pc = 0x1DC1BCu;
    // 0x1dc1bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc1c0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc1c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc1c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc1cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc1d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc1d8: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x1dc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x1dc1dc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC1DCu;
    {
        const bool branch_taken_0x1dc1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1dc) {
            ctx->pc = 0x1DC23Cu;
            goto label_1dc23c;
        }
    }
    ctx->pc = 0x1DC1E4u;
    // 0x1dc1e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc1e8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc1ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc1f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc1f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc1fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc200: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc204: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc208: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc210: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc218: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc21c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc220: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc224: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc228: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x1dc228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1dc22c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x1dc230: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc230u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc234: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC234u;
    SET_GPR_U32(ctx, 31, 0x1DC23Cu);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC234u, 0x1DC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC23Cu;
label_1dc23c:
    // 0x1dc23c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc240: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc244: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc24c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc250: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc254: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc258: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc25c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc260: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc264: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc268: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc26c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc270: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1dc274: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1dc274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1dc278: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc278u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc27c: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC27Cu;
    SET_GPR_U32(ctx, 31, 0x1DC284u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC27Cu, 0x1DC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC284u;
label_1dc284:
    // 0x1dc284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc288: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x1dc288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x1dc28c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dc28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dc290: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1dc290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1dc294: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DC294u;
    {
        const bool branch_taken_0x1dc294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc294) {
            ctx->pc = 0x1DC2E4u;
            goto label_1dc2e4;
        }
    }
    ctx->pc = 0x1DC29Cu;
    // 0x1dc29c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2a0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc2a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc2b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc2bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc2c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2c8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2cc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc2d0: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1dc2d4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x1dc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dc2d8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc2d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc2dc: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC2DCu;
    SET_GPR_U32(ctx, 31, 0x1DC2E4u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC2DCu, 0x1DC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC2E4u;
label_1dc2e4:
    // 0x1dc2e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2e8: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc2f4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc2f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc300: 0x8c630204  lw          $v1, 0x204($v1)
    ctx->pc = 0x1dc300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc304: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC304u;
    {
        const bool branch_taken_0x1dc304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc304) {
            ctx->pc = 0x1DC364u;
            goto label_1dc364;
        }
    }
    ctx->pc = 0x1DC30Cu;
    // 0x1dc30c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc310: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc314: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc31c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc320: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc324: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc32c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc330: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc338: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc33c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc340: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc348: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc34c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc34cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc350: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x1dc350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1dc354: 0x8c650204  lw          $a1, 0x204($v1)
    ctx->pc = 0x1dc354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc358: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc35c: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC35Cu;
    SET_GPR_U32(ctx, 31, 0x1DC364u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC35Cu, 0x1DC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC364u;
label_1dc364:
    // 0x1dc364: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1dc364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1dc368: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1dc368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1dc36c: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1DC36Cu;
    {
        const bool branch_taken_0x1dc36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc36c) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC374u;
    // 0x1dc374: 0x8e241248  lw          $a0, 0x1248($s1)
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4680)));
    // 0x1dc378: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc37c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc380: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dc384: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1dc384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1dc388: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x1dc388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1dc38c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc390: 0x24720074  addiu       $s2, $v1, 0x74
    ctx->pc = 0x1dc390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x1dc394: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dc394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc398: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x1DC398u;
    {
        const bool branch_taken_0x1dc398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc398) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC3A0u;
    // 0x1dc3a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3a4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc3ac: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1dc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1dc3b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc3bc: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1dc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1dc3c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3c4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3c8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc3c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc3cc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc3d0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dc3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dc3d4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc3d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc3d8: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC3D8u;
    SET_GPR_U32(ctx, 31, 0x1DC3E0u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC3D8u, 0x1DC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3E0u;
label_1dc3e0:
    // 0x1dc3e0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1DC3E0u;
    {
        const bool branch_taken_0x1dc3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc3e0) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC3E8u;
label_1dc3e8:
    // 0x1dc3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3ec: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc3f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc3fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc404: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x1dc404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x1dc408: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC408u;
    {
        const bool branch_taken_0x1dc408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc408) {
            ctx->pc = 0x1DC468u;
            goto label_1dc468;
        }
    }
    ctx->pc = 0x1DC410u;
    // 0x1dc410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc414: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc418: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc420: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc424: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc428: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc42c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc430: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc434: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc43c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc440: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc444: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc448: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc44c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc450: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc454: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x1dc454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1dc458: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x1dc45c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc45cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc460: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC460u;
    SET_GPR_U32(ctx, 31, 0x1DC468u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC460u, 0x1DC468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC468u;
label_1dc468:
    // 0x1dc468: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc46c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc46cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc470: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc474: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc478: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc47c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc480: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc484: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc488: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc48c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc494: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc498: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc49c: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1dc49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1dc4a0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1dc4a4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc4a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc4a8: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC4A8u;
    SET_GPR_U32(ctx, 31, 0x1DC4B0u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC4A8u, 0x1DC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4B0u;
label_1dc4b0:
    // 0x1dc4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4b4: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x1dc4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x1dc4b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dc4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dc4bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1dc4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1dc4c0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DC4C0u;
    {
        const bool branch_taken_0x1dc4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4c0) {
            ctx->pc = 0x1DC510u;
            goto label_1dc510;
        }
    }
    ctx->pc = 0x1DC4C8u;
    // 0x1dc4c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4cc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc4d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc4d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc4d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc4dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc4e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc4e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc4ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc4f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4f4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc4f8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc4f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc4fc: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x1dc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1dc500: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x1dc500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dc504: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc508: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC508u;
    SET_GPR_U32(ctx, 31, 0x1DC510u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC508u, 0x1DC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC510u;
label_1dc510:
    // 0x1dc510: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc514: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1dc514u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc518: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc51c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc520: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc524: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc52c: 0x8c630204  lw          $v1, 0x204($v1)
    ctx->pc = 0x1dc52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc530: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC530u;
    {
        const bool branch_taken_0x1dc530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc530) {
            ctx->pc = 0x1DC590u;
            goto label_1dc590;
        }
    }
    ctx->pc = 0x1DC538u;
    // 0x1dc538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc53c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc53cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc540: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc54c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc550: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc558: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc55c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc564: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc568: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc56c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc574: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc578: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc57c: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x1dc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1dc580: 0x8c650204  lw          $a1, 0x204($v1)
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc584: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc588: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC588u;
    SET_GPR_U32(ctx, 31, 0x1DC590u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC588u, 0x1DC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC590u;
label_1dc590:
    // 0x1dc590: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1dc594: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1dc594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1dc598: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC598u;
    {
        const bool branch_taken_0x1dc598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc598) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC5A0u;
    // 0x1dc5a0: 0x8e241248  lw          $a0, 0x1248($s1)
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4680)));
    // 0x1dc5a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc5a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc5ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1dc5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dc5b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1dc5b4: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x1dc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1dc5b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc5bc: 0x24730074  addiu       $s3, $v1, 0x74
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x1dc5c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1dc5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc5c4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DC5C4u;
    {
        const bool branch_taken_0x1dc5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc5c4) {
            ctx->pc = 0x1DC60Cu;
            goto label_1dc60c;
        }
    }
    ctx->pc = 0x1DC5CCu;
    // 0x1dc5cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc5d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc5d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc5d8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1dc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dc5dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc5e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc5e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc5e8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1dc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dc5ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc5f0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc5f4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc5f8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc5fc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dc5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dc600: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc600u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc604: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC604u;
    SET_GPR_U32(ctx, 31, 0x1DC60Cu);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC604u, 0x1DC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC60Cu;
label_1dc60c:
    // 0x1dc60c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc610: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc614: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1dc614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1dc618: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc61c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc624: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1dc628: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc62c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1dc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1dc630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc634: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc638: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1dc638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1dc63c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc640: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc648: 0x8c640138  lw          $a0, 0x138($v1)
    ctx->pc = 0x1dc648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1dc64c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc650: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x1dc650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
    // 0x1dc654: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1dc654u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc658: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc65c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc66c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dc670: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC678u;
}
