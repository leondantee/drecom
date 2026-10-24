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

// Function: entry_0025c504
// Address: 0x25c504 - 0x25c660
void entry_0025c504_0x25c504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c504_0x25c504");
#endif

    switch (ctx->pc) {
        case 0x25c574u: goto label_25c574;
        case 0x25c594u: goto label_25c594;
        case 0x25c5b4u: goto label_25c5b4;
        case 0x25c5d4u: goto label_25c5d4;
        case 0x25c634u: goto label_25c634;
        default: break;
    }

    ctx->pc = 0x25c504u;

    // 0x25c504: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x25c504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x25c508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c50c: 0x0  nop
    ctx->pc = 0x25c50cu;
    // NOP
    // 0x25c510: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25c510u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25c514: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25c514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25c518: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c51c: 0xe46009d0  swc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25c51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2512), bits); }
    // 0x25c520: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c524: 0x24620300  addiu       $v0, $v1, 0x300
    ctx->pc = 0x25c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x25c528: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25c528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c52c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x25c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25c530: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25c530u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25c534: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c538: 0xc44009d0  lwc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c53c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x25c53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x25c540: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c544: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c548: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x25c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x25c54c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c550: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x25c550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25c554: 0xa7a300f8  sh          $v1, 0xF8($sp)
    ctx->pc = 0x25c554u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c558: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c55c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x25c55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25c560: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x25c560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c564: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c568: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25c56c: 0xc067688  jal         func_19DA20
    ctx->pc = 0x25C56Cu;
    SET_GPR_U32(ctx, 31, 0x25C574u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x25C56Cu, 0x25C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C574u;
label_25c574:
    // 0x25c574: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c578: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c57c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c580: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25c584: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25c588: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x25c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c58c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x25C58Cu;
    SET_GPR_U32(ctx, 31, 0x25C594u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x25C58Cu, 0x25C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C594u;
label_25c594:
    // 0x25c594: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c598: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c59c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5a0: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25c5a4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x25c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x25c5a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x25c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c5ac: 0xc067808  jal         func_19E020
    ctx->pc = 0x25C5ACu;
    SET_GPR_U32(ctx, 31, 0x25C5B4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25C5ACu, 0x25C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5B4u;
label_25c5b4:
    // 0x25c5b4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5b8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5bc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5c0: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x25c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x25c5c4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25c5c8: 0xc46c00d8  lwc1        $f12, 0xD8($v1)
    ctx->pc = 0x25c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c5cc: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25C5CCu;
    SET_GPR_U32(ctx, 31, 0x25C5D4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25C5CCu, 0x25C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5D4u;
label_25c5d4:
    // 0x25c5d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25c5d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c5d8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5dc: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25c5e0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25c5e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c5e4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5e8: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25c5ec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25c5f0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c5f4: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x25c5f8: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x25C5F8u;
    {
        const bool branch_taken_0x25c5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c5f8) {
            ctx->pc = 0x25C718u;
            return;
        }
    }
    ctx->pc = 0x25C600u;
    // 0x25c600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c604: 0xa7a300fa  sh          $v1, 0xFA($sp)
    ctx->pc = 0x25c604u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c608: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c60c: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x25c610: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x25c610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x25c614: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c618: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x25c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25c61c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25c61cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25c620: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x25c620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25c624: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x25c624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x25c628: 0x24460602  addiu       $a2, $v0, 0x602
    ctx->pc = 0x25c628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1538));
    // 0x25c62c: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25C62Cu;
    SET_GPR_U32(ctx, 31, 0x25C634u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C62Cu, 0x25C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C634u;
label_25c634:
    // 0x25c634: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c638: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x25c638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25c63c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x25c63cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25c640: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x25c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x25c644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C644u;
    {
        const bool branch_taken_0x25c644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c644) {
            ctx->pc = 0x25C660u;
            return;
        }
    }
    ctx->pc = 0x25C64Cu;
    // 0x25c64c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x25c650: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25c650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c654: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25c65c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x25c65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x25c660u;
}
