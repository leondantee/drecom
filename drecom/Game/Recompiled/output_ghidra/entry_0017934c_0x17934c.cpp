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

// Function: entry_0017934c
// Address: 0x17934c - 0x17952c
void entry_0017934c_0x17934c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017934c_0x17934c");
#endif

    switch (ctx->pc) {
        case 0x1793ecu: goto label_1793ec;
        default: break;
    }

    ctx->pc = 0x17934cu;

    // 0x17934c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x17934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x179350: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179354: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x179358: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x179358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x17935c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x179360: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x179364: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x179364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x179368: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x179368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17936c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179370: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x179370u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x179374: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179378: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17937c: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x17937cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x179380: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x179380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x179384: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x179384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x179388: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x179388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17938c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x179390: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179394: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x179394u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x179398: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17939c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x17939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1793a0: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x1793a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1793a4: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x1793a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1793a8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1793a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1793ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1793acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1793b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1793b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1793b4: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x1793b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1793b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1793b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1793bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1793bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1793c0: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1793c4: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x1793c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1793c8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1793c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1793cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1793ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1793d0: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1793d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1793d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1793d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1793d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1793dc: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x1793dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1793e0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1793e4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1793E4u;
    SET_GPR_U32(ctx, 31, 0x1793ECu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1793E4u, 0x1793ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793ECu;
label_1793ec:
    // 0x1793ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1793ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1793f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1793f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1793f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1793f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1793f8: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x1793f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1793fc: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x1793fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179400: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x179400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x179404: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x179404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x179408: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x179408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x17940c: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x17940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x179410: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179414: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x179414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x179418: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x179418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17941c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x179420: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179424: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x179428: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x179428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17942c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x17942cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x179430: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179434: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x179434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x179438: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x179438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17943c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179440: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179444: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179448: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x179448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17944c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x17944cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179450: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179454: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17945c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x179460: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179464: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x179464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x179468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17946c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179470: 0x34028305  ori         $v0, $zero, 0x8305
    ctx->pc = 0x179470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33541);
    // 0x179474: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x179474u;
    {
        const bool branch_taken_0x179474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179474) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x17947Cu;
    // 0x17947c: 0x34028205  ori         $v0, $zero, 0x8205
    ctx->pc = 0x17947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33285);
    // 0x179480: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x179480u;
    {
        const bool branch_taken_0x179480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179480) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x179488u;
    // 0x179488: 0x34028105  ori         $v0, $zero, 0x8105
    ctx->pc = 0x179488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33029);
    // 0x17948c: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x17948Cu;
    {
        const bool branch_taken_0x17948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17948c) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x179494u;
    // 0x179494: 0x34028304  ori         $v0, $zero, 0x8304
    ctx->pc = 0x179494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33540);
    // 0x179498: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x179498u;
    {
        const bool branch_taken_0x179498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179498) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x1794A0u;
    // 0x1794a0: 0x34028204  ori         $v0, $zero, 0x8204
    ctx->pc = 0x1794a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33284);
    // 0x1794a4: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1794A4u;
    {
        const bool branch_taken_0x1794a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794a4) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x1794ACu;
    // 0x1794ac: 0x34028104  ori         $v0, $zero, 0x8104
    ctx->pc = 0x1794acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33028);
    // 0x1794b0: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1794B0u;
    {
        const bool branch_taken_0x1794b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794b0) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x1794B8u;
    // 0x1794b8: 0x24020304  addiu       $v0, $zero, 0x304
    ctx->pc = 0x1794b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    // 0x1794bc: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1794BCu;
    {
        const bool branch_taken_0x1794bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794bc) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x1794C4u;
    // 0x1794c4: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x1794c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x1794c8: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1794C8u;
    {
        const bool branch_taken_0x1794c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794c8) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x1794D0u;
    // 0x1794d0: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1794d4: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1794D4u;
    {
        const bool branch_taken_0x1794d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794d4) {
            ctx->pc = 0x179678u;
            return;
        }
    }
    ctx->pc = 0x1794DCu;
    // 0x1794dc: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x1794dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x1794e0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x17952Cu;
            return;
        }
    }
    ctx->pc = 0x1794E8u;
    // 0x1794e8: 0x24020205  addiu       $v0, $zero, 0x205
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x1794ec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1794ECu;
    {
        const bool branch_taken_0x1794ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794ec) {
            ctx->pc = 0x17952Cu;
            return;
        }
    }
    ctx->pc = 0x1794F4u;
    // 0x1794f4: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1794f8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1794F8u;
    {
        const bool branch_taken_0x1794f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794f8) {
            ctx->pc = 0x17952Cu;
            return;
        }
    }
    ctx->pc = 0x179500u;
    // 0x179500: 0x24024304  addiu       $v0, $zero, 0x4304
    ctx->pc = 0x179500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17156));
    // 0x179504: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179504u;
    {
        const bool branch_taken_0x179504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179504) {
            ctx->pc = 0x17952Cu;
            return;
        }
    }
    ctx->pc = 0x17950Cu;
    // 0x17950c: 0x24024204  addiu       $v0, $zero, 0x4204
    ctx->pc = 0x17950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16900));
    // 0x179510: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179510) {
            ctx->pc = 0x17952Cu;
            return;
        }
    }
    ctx->pc = 0x179518u;
    // 0x179518: 0x24024104  addiu       $v0, $zero, 0x4104
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16644));
    // 0x17951c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17951Cu;
    {
        const bool branch_taken_0x17951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17951c) {
            ctx->pc = 0x17952Cu;
            return;
        }
    }
    ctx->pc = 0x179524u;
    // 0x179524: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x179524u;
    {
        const bool branch_taken_0x179524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179524) {
            ctx->pc = 0x1797BCu;
            return;
        }
    }
    ctx->pc = 0x17952Cu;
}
