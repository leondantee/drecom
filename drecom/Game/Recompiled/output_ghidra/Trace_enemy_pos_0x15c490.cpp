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

// Function: Trace_enemy_pos
// Address: 0x15c490 - 0x15c740
void Trace_enemy_pos_0x15c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trace_enemy_pos_0x15c490");
#endif

    switch (ctx->pc) {
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c614u: goto label_15c614;
        case 0x15c628u: goto label_15c628;
        case 0x15c650u: goto label_15c650;
        case 0x15c700u: goto label_15c700;
        case 0x15c724u: goto label_15c724;
        default: break;
    }

    ctx->pc = 0x15c490u;

    // 0x15c490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15c494: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15c498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c49c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15c4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4a4: 0x90621560  lbu         $v0, 0x1560($v1)
    ctx->pc = 0x15c4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5472)));
    // 0x15c4a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c4ac: 0xa0621560  sb          $v0, 0x1560($v1)
    ctx->pc = 0x15c4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5472), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c4b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4b4: 0x90421560  lbu         $v0, 0x1560($v0)
    ctx->pc = 0x15c4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x15c4b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c4bc: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x15c4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15c4c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4C0u;
    {
        const bool branch_taken_0x15c4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4c0) {
            ctx->pc = 0x15C4D0u;
            goto label_15c4d0;
        }
    }
    ctx->pc = 0x15C4C8u;
    // 0x15c4c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4cc: 0xa0401560  sb          $zero, 0x1560($v0)
    ctx->pc = 0x15c4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5472), (uint8_t)GPR_U32(ctx, 0));
label_15c4d0:
    // 0x15c4d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4d4: 0x90621561  lbu         $v0, 0x1561($v1)
    ctx->pc = 0x15c4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5473)));
    // 0x15c4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c4dc: 0xa0621561  sb          $v0, 0x1561($v1)
    ctx->pc = 0x15c4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5473), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c4e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4e4: 0x90421561  lbu         $v0, 0x1561($v0)
    ctx->pc = 0x15c4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5473)));
    // 0x15c4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c4ec: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x15c4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15c4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C500u;
            goto label_15c500;
        }
    }
    ctx->pc = 0x15C4F8u;
    // 0x15c4f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4fc: 0xa0401561  sb          $zero, 0x1561($v0)
    ctx->pc = 0x15c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5473), (uint8_t)GPR_U32(ctx, 0));
label_15c500:
    // 0x15c500: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c504: 0x8c5013e8  lw          $s0, 0x13E8($v0)
    ctx->pc = 0x15c504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c508: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c50c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c510: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x15c514: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C518u;
    {
        const bool branch_taken_0x15c518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c518) {
            ctx->pc = 0x15C538u;
            goto label_15c538;
        }
    }
    ctx->pc = 0x15C520u;
    // 0x15c520: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c524: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x15c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c528: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c52c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15c530: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C530u;
    {
        const bool branch_taken_0x15c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c530) {
            ctx->pc = 0x15C580u;
            goto label_15c580;
        }
    }
    ctx->pc = 0x15C538u;
label_15c538:
    // 0x15c538: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c53c: 0x90421560  lbu         $v0, 0x1560($v0)
    ctx->pc = 0x15c53cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x15c540: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c544: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c550: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c554: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c554u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c558: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c55c: 0x90421561  lbu         $v0, 0x1561($v0)
    ctx->pc = 0x15c55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5473)));
    // 0x15c560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c564: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c568: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c570: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x15c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c574: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x15c574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x15c578: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15C578u;
    {
        const bool branch_taken_0x15c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c578) {
            ctx->pc = 0x15C5BCu;
            goto label_15c5bc;
        }
    }
    ctx->pc = 0x15C580u;
label_15c580:
    // 0x15c580: 0x920210a9  lbu         $v0, 0x10A9($s0)
    ctx->pc = 0x15c580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4265)));
    // 0x15c584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c588: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15c588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15c58c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x15c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15c590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c594: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15c598: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15c598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c59c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5a0: 0x90421561  lbu         $v0, 0x1561($v0)
    ctx->pc = 0x15c5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5473)));
    // 0x15c5a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c5a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c5ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c5b4: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c5b8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x15c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_15c5bc:
    // 0x15c5bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5c0: 0x90421560  lbu         $v0, 0x1560($v0)
    ctx->pc = 0x15c5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x15c5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c5c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c5cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c5d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5d8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c5dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c5e0: 0x24651420  addiu       $a1, $v1, 0x1420
    ctx->pc = 0x15c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x15c5e4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c5e8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15C5E8u;
    SET_GPR_U32(ctx, 31, 0x15C5F0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15C5E8u, 0x15C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5F0u;
label_15c5f0:
    // 0x15c5f0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5f8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15c5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c5fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c600: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15c604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c608: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15c608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c60c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15C60Cu;
    SET_GPR_U32(ctx, 31, 0x15C614u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15C60Cu, 0x15C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C614u;
label_15c614:
    // 0x15c614: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15c614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15c618: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x15c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c61c: 0xc7ad003c  lwc1        $f13, 0x3C($sp)
    ctx->pc = 0x15c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c620: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15C620u;
    SET_GPR_U32(ctx, 31, 0x15C628u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15C620u, 0x15C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C628u;
label_15c628:
    // 0x15c628: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c628u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15c62c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15c630: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x15c634: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x15c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x15c638: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15c638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15c63c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c640: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15c640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c644: 0xc44d1564  lwc1        $f13, 0x1564($v0)
    ctx->pc = 0x15c644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c648: 0xc058f50  jal         func_163D40
    ctx->pc = 0x15C648u;
    SET_GPR_U32(ctx, 31, 0x15C650u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x15C648u, 0x15C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C650u;
label_15c650:
    // 0x15c650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c654: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x15c658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c65c: 0xc4611564  lwc1        $f1, 0x1564($v1)
    ctx->pc = 0x15c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c660: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x15c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x15c664: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c66c: 0x0  nop
    ctx->pc = 0x15c66cu;
    // NOP
    // 0x15c670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15c670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c674: 0x0  nop
    ctx->pc = 0x15c674u;
    // NOP
    // 0x15c678: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x15C678u;
    {
        const bool branch_taken_0x15c678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c678) {
            ctx->pc = 0x15C694u;
            goto label_15c694;
        }
    }
    ctx->pc = 0x15C680u;
    // 0x15c680: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x15c680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x15c684: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c68c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c690: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_15c694:
    // 0x15c694: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c698: 0xc4611564  lwc1        $f1, 0x1564($v1)
    ctx->pc = 0x15c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c69c: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x15c6a0: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c6a8: 0x0  nop
    ctx->pc = 0x15c6a8u;
    // NOP
    // 0x15c6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15c6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6b0: 0x0  nop
    ctx->pc = 0x15c6b0u;
    // NOP
    // 0x15c6b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15C6B4u;
    {
        const bool branch_taken_0x15c6b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6b4) {
            ctx->pc = 0x15C6D0u;
            goto label_15c6d0;
        }
    }
    ctx->pc = 0x15C6BCu;
    // 0x15c6bc: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x15c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x15c6c0: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c6c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c6cc: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_15c6d0:
    // 0x15c6d0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c6d4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x15c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x15c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c6dc: 0x0  nop
    ctx->pc = 0x15c6dcu;
    // NOP
    // 0x15c6e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15c6e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6e4: 0x0  nop
    ctx->pc = 0x15c6e4u;
    // NOP
    // 0x15c6e8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x15C6E8u;
    {
        const bool branch_taken_0x15c6e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6e8) {
            ctx->pc = 0x15C72Cu;
            goto label_15c72c;
        }
    }
    ctx->pc = 0x15C6F0u;
    // 0x15c6f0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x15c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c6f4: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c6f8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15C6F8u;
    SET_GPR_U32(ctx, 31, 0x15C700u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15C6F8u, 0x15C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C700u;
label_15c700:
    // 0x15c700: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15c700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15c704: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x15c708: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x15c70c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15c70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15c710: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c714: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c718: 0xc44d1568  lwc1        $f13, 0x1568($v0)
    ctx->pc = 0x15c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c71c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x15C71Cu;
    SET_GPR_U32(ctx, 31, 0x15C724u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x15C71Cu, 0x15C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C724u;
label_15c724:
    // 0x15c724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c728: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x15c728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_15c72c:
    // 0x15c72c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15c72cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c734: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15c738: 0x3e00008  jr          $ra
    ctx->pc = 0x15C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C740u;
}
