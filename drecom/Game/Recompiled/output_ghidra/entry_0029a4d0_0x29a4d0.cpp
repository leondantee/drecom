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

// Function: entry_0029a4d0
// Address: 0x29a4d0 - 0x29a61c
void entry_0029a4d0_0x29a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a4d0_0x29a4d0");
#endif

    switch (ctx->pc) {
        case 0x29a5a8u: goto label_29a5a8;
        case 0x29a5ccu: goto label_29a5cc;
        default: break;
    }

    ctx->pc = 0x29a4d0u;

    // 0x29a4d0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x29a4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29a4d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a4d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a4dc: 0x2c2302b  sltu        $a2, $s6, $v0
    ctx->pc = 0x29a4dcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29a4e0: 0x14c0ff09  bnez        $a2, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x29A4E0u;
    {
        const bool branch_taken_0x29a4e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a4e0) {
            ctx->pc = 0x29A108u;
            return;
        }
    }
    ctx->pc = 0x29A4E8u;
    // 0x29a4e8: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a4ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a4f0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a4f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29a4f8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x29a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x29a4fc: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x29a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x29a500: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x29a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a504: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a508: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29a50c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x29a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29a510: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x29a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x29a514: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a518: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29a518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a51c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x29a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x29a520: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x29a520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a524: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x29a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a528: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x29a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x29a52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29a530: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a534: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a538: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x29a538u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x29a53c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29a540: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x29a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a544: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x29a544u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x29a548: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a54c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a550: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x29a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a554: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29a558: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29a558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x29a55c: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x29a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x29a560: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x29a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a564: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29a564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29a568: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a56c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29a56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a570: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29a570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29a574: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a578: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29a578u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29a57c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a580: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29a580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x29a584: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x29a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a588: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x29a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x29a58c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29a58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a590: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a594: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x29a594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x29a598: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a59c: 0xc44c01d4  lwc1        $f12, 0x1D4($v0)
    ctx->pc = 0x29a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a5a0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29A5A0u;
    SET_GPR_U32(ctx, 31, 0x29A5A8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29A5A0u, 0x29A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5A8u;
label_29a5a8:
    // 0x29a5a8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x29a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a5b0: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x29a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x29a5b4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x29a5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29a5b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x29a5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29a5bc: 0x8ca401d0  lw          $a0, 0x1D0($a1)
    ctx->pc = 0x29a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x29a5c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29a5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a5c4: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x29A5C4u;
    SET_GPR_U32(ctx, 31, 0x29A5CCu);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x29A5C4u, 0x29A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5CCu;
label_29a5cc:
    // 0x29a5cc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x29a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a5d0: 0x8c6301d0  lw          $v1, 0x1D0($v1)
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x29a5d4: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x29a5d8: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x29a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x29a5dc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x29a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x29a5e0: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x29a5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a5e4: 0xae4301cc  sw          $v1, 0x1CC($s2)
    ctx->pc = 0x29a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 3));
    // 0x29a5e8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x29a5e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29a5ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29a5ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29a5f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29a5f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a5f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29a5f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a5f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29a5f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a5fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29a5fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29a600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a610: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x29a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x29a614: 0x3e00008  jr          $ra
    ctx->pc = 0x29A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A61Cu;
}
