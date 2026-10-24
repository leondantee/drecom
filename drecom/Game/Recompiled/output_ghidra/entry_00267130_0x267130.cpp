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

// Function: entry_00267130
// Address: 0x267130 - 0x267224
void entry_00267130_0x267130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267130_0x267130");
#endif

    switch (ctx->pc) {
        case 0x2671d4u: goto label_2671d4;
        case 0x2671e4u: goto label_2671e4;
        default: break;
    }

    ctx->pc = 0x267130u;

    // 0x267130: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x267130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x267134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267138: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x267138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x26713c: 0x8c5001ac  lw          $s0, 0x1AC($v0)
    ctx->pc = 0x26713cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x267140: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x267140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267148: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26714c: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x26714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x267150: 0x96c210a4  lhu         $v0, 0x10A4($s6)
    ctx->pc = 0x267150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4260)));
    // 0x267154: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x267154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x267158: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x267158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x26715c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x26715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x267160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267164: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x267164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267168: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x267168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26716c: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x26716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x267170: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267174: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x267174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x267178: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x267178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x26717c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x267180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x267180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x267184: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x267184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x267188: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x267188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x26718c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x26718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x267190: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x267190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267194: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x267194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x267198: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x267198u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x26719c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x26719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2671a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2671a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2671a4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x2671a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2671a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2671a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2671ac: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2671acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671b0: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2671b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2671b4: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2671b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671b8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2671b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2671bc: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2671bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671c0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2671c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x2671c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2671c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2671c8: 0x8e450a68  lw          $a1, 0xA68($s2)
    ctx->pc = 0x2671c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2671cc: 0xc095228  jal         func_2548A0
    ctx->pc = 0x2671CCu;
    SET_GPR_U32(ctx, 31, 0x2671D4u);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x2671CCu, 0x2671D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671D4u;
label_2671d4:
    // 0x2671d4: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2671d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2671d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2671d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2671dc: 0xc096558  jal         func_259560
    ctx->pc = 0x2671DCu;
    SET_GPR_U32(ctx, 31, 0x2671E4u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x2671DCu, 0x2671E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671E4u;
label_2671e4:
    // 0x2671e4: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x2671e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x2671e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2671e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2671ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2671ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2671f0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2671F0u;
    {
        const bool branch_taken_0x2671f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2671f0) {
            ctx->pc = 0x267284u;
            return;
        }
    }
    ctx->pc = 0x2671F8u;
    // 0x2671f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2671f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2671fc: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2671FCu;
    {
        const bool branch_taken_0x2671fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2671fc) {
            ctx->pc = 0x267254u;
            return;
        }
    }
    ctx->pc = 0x267204u;
    // 0x267204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267208: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267208u;
    {
        const bool branch_taken_0x267208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267208) {
            ctx->pc = 0x26723Cu;
            return;
        }
    }
    ctx->pc = 0x267210u;
    // 0x267210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267214: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267214u;
    {
        const bool branch_taken_0x267214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267214) {
            ctx->pc = 0x267224u;
            return;
        }
    }
    ctx->pc = 0x26721Cu;
    // 0x26721c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26721Cu;
    {
        const bool branch_taken_0x26721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26721c) {
            ctx->pc = 0x267298u;
            return;
        }
    }
    ctx->pc = 0x267224u;
}
