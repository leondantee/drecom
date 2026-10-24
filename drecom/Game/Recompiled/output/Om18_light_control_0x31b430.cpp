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

// Function: Om18_light_control
// Address: 0x31b430 - 0x31b95c
void Om18_light_control_0x31b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_light_control_0x31b430");
#endif

    switch (ctx->pc) {
        case 0x31b490u: goto label_31b490;
        case 0x31b630u: goto label_31b630;
        case 0x31b648u: goto label_31b648;
        case 0x31b664u: goto label_31b664;
        case 0x31b6b4u: goto label_31b6b4;
        case 0x31b6ccu: goto label_31b6cc;
        case 0x31b6f8u: goto label_31b6f8;
        case 0x31b8dcu: goto label_31b8dc;
        case 0x31b8f0u: goto label_31b8f0;
        case 0x31b904u: goto label_31b904;
        default: break;
    }

    ctx->pc = 0x31b430u;

    // 0x31b430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b434: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31b434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31b438: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x31b438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x31b43c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b440: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x31b440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31b444: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b448: 0x10830093  beq         $a0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x31B448u;
    {
        const bool branch_taken_0x31b448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b448) {
            ctx->pc = 0x31B698u;
            goto label_31b698;
        }
    }
    ctx->pc = 0x31B450u;
    // 0x31b450: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b454: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x31B454u;
    {
        const bool branch_taken_0x31b454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b454) {
            ctx->pc = 0x31B66Cu;
            goto label_31b66c;
        }
    }
    ctx->pc = 0x31B45Cu;
    // 0x31b45c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b460: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x31B460u;
    {
        const bool branch_taken_0x31b460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b460) {
            ctx->pc = 0x31B614u;
            goto label_31b614;
        }
    }
    ctx->pc = 0x31B468u;
    // 0x31b468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b46c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x31B46Cu;
    {
        const bool branch_taken_0x31b46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b46c) {
            ctx->pc = 0x31B4C4u;
            goto label_31b4c4;
        }
    }
    ctx->pc = 0x31B474u;
    // 0x31b474: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B474u;
    {
        const bool branch_taken_0x31b474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b474) {
            ctx->pc = 0x31B484u;
            goto label_31b484;
        }
    }
    ctx->pc = 0x31B47Cu;
    // 0x31b47c: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x31B47Cu;
    {
        const bool branch_taken_0x31b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b47c) {
            ctx->pc = 0x31B94Cu;
            goto label_31b94c;
        }
    }
    ctx->pc = 0x31B484u;
label_31b484:
    // 0x31b484: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b488: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x31B488u;
    SET_GPR_U32(ctx, 31, 0x31B490u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x31B488u, 0x31B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B490u;
label_31b490:
    // 0x31b490: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b494: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b498: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b4a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b4a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b4a8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b4ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b4b0: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x31b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31b4b4: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x31b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x31b4b8: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x31b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x31b4bc: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x31B4BCu;
    {
        const bool branch_taken_0x31b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b4bc) {
            ctx->pc = 0x31B94Cu;
            goto label_31b94c;
        }
    }
    ctx->pc = 0x31B4C4u;
label_31b4c4:
    // 0x31b4c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b4c8: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b4cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b4d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b4d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b4dc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b4e0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b4e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x31b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31b4e8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x31b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x31b4ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31b4f0: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x31b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x31b4f4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x31b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x31b4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b4fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b500: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b504: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b50c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b510: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b514: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b51c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x31b51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x31b520: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x31b520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x31b524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b528: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b52c: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b530: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b538: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b53c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b540: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b548: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x31b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x31b54c: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x31b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x31b550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b558: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b55c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b564: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b568: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b56c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b574: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x31b574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x31b578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31b57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b580: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b584: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b588: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b590: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b594: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b598: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5a0: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x31b5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x31b5a4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x31b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x31b5a8: 0x3442e6e7  ori         $v0, $v0, 0xE6E7
    ctx->pc = 0x31b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
    // 0x31b5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b5b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b5b4: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b5b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b5c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b5c8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5d0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x31b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x31b5d4: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x31b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x31b5d8: 0x34429091  ori         $v0, $v0, 0x9091
    ctx->pc = 0x31b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x31b5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b5e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b5e4: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b5e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b5f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b5f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b5f8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x31b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x31b5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b600: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x31b600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x31b604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b608: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31b60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b610: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_31b614:
    // 0x31b614: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b618: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b61c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b620: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x31b620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31b624: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31b624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b628: 0xc05db20  jal         func_176C80
    ctx->pc = 0x31B628u;
    SET_GPR_U32(ctx, 31, 0x31B630u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x31B628u, 0x31B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B630u;
label_31b630:
    // 0x31b630: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x31b630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x31b634: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31b634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b63c: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b640: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31B640u;
    SET_GPR_U32(ctx, 31, 0x31B648u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31B640u, 0x31B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B648u;
label_31b648:
    // 0x31b648: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x31b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x31b64c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31b64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31b650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31b650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b658: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b65c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31B65Cu;
    SET_GPR_U32(ctx, 31, 0x31B664u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31B65Cu, 0x31B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B664u;
label_31b664:
    // 0x31b664: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x31B664u;
    {
        const bool branch_taken_0x31b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b664) {
            ctx->pc = 0x31B94Cu;
            goto label_31b94c;
        }
    }
    ctx->pc = 0x31B66Cu;
label_31b66c:
    // 0x31b66c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b670: 0xac4012b4  sw          $zero, 0x12B4($v0)
    ctx->pc = 0x31b670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 0));
    // 0x31b674: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x31b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
    // 0x31b678: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x31b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x31b67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b680: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b684: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x31b684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x31b688: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b68c: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31b690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b694: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_31b698:
    // 0x31b698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b69c: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b6a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6a4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x31b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31b6a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31b6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b6ac: 0xc05db20  jal         func_176C80
    ctx->pc = 0x31B6ACu;
    SET_GPR_U32(ctx, 31, 0x31B6B4u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x31B6ACu, 0x31B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6B4u;
label_31b6b4:
    // 0x31b6b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6b8: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b6bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6c0: 0xc44c12cc  lwc1        $f12, 0x12CC($v0)
    ctx->pc = 0x31b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b6c4: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31B6C4u;
    SET_GPR_U32(ctx, 31, 0x31B6CCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31B6C4u, 0x31B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6CCu;
label_31b6cc:
    // 0x31b6cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6d0: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b6d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6d8: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x31b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b6dc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x31b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x31b6e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31b6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b6e8: 0x0  nop
    ctx->pc = 0x31b6e8u;
    // NOP
    // 0x31b6ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x31b6ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31b6f0: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31B6F0u;
    SET_GPR_U32(ctx, 31, 0x31B6F8u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31B6F0u, 0x31B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6F8u;
label_31b6f8:
    // 0x31b6f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6fc: 0x8c8312b4  lw          $v1, 0x12B4($a0)
    ctx->pc = 0x31b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4788)));
    // 0x31b700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31b704: 0xac8312b4  sw          $v1, 0x12B4($a0)
    ctx->pc = 0x31b704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4788), GPR_U32(ctx, 3));
    // 0x31b708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b70c: 0x8c6312b4  lw          $v1, 0x12B4($v1)
    ctx->pc = 0x31b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4788)));
    // 0x31b710: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x31b710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x31b714: 0x14200065  bnez        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x31B714u;
    {
        const bool branch_taken_0x31b714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b714) {
            ctx->pc = 0x31B8ACu;
            goto label_31b8ac;
        }
    }
    ctx->pc = 0x31B71Cu;
    // 0x31b71c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b720: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x31b720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x31b724: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x31b724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x31b728: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b72c: 0xc48012cc  lwc1        $f0, 0x12CC($a0)
    ctx->pc = 0x31b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b734: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x31b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x31b738: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b73c: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b740: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b748: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b74c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b750: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b754: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b758: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b75c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b764: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x31b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b76c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x31b76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x31b770: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b774: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b778: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b77c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b780: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b784: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b788: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b78c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b790: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b794: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b79c: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x31b79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b7a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b7a4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x31b7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x31b7a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b7ac: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b7b0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b7b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b7b8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b7bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b7c0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b7c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b7c8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b7cc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b7d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b7d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b7d4: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x31b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b7d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b7dc: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x31b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x31b7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b7e4: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b7e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b7ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b7f0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b7f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b7f8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b7fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b800: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b804: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b808: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b80c: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x31b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b814: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x31b814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x31b818: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b81c: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b820: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b828: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b82c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b830: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b834: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b838: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b83c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b840: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b844: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x31b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b84c: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x31b84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x31b850: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b854: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b858: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b860: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b864: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b868: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b86c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b870: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b874: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b878: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b87c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x31b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b884: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x31b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x31b888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b88c: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b890: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b898: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b89c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b8a0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b8a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b8a8: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x31b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
label_31b8ac:
    // 0x31b8ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8b0: 0x8c6312b4  lw          $v1, 0x12B4($v1)
    ctx->pc = 0x31b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4788)));
    // 0x31b8b4: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x31b8b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x31b8b8: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x31B8B8u;
    {
        const bool branch_taken_0x31b8b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b8b8) {
            ctx->pc = 0x31B94Cu;
            goto label_31b94c;
        }
    }
    ctx->pc = 0x31B8C0u;
    // 0x31b8c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8c4: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8cc: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x31b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31b8d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b8d4: 0xc05db20  jal         func_176C80
    ctx->pc = 0x31B8D4u;
    SET_GPR_U32(ctx, 31, 0x31B8DCu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x31B8D4u, 0x31B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8DCu;
label_31b8dc:
    // 0x31b8dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31b8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b8e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8e4: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b8e8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31B8E8u;
    SET_GPR_U32(ctx, 31, 0x31B8F0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31B8E8u, 0x31B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8F0u;
label_31b8f0:
    // 0x31b8f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31b8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b8f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8f8: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b8fc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31B8FCu;
    SET_GPR_U32(ctx, 31, 0x31B904u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31B8FCu, 0x31B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B904u;
label_31b904:
    // 0x31b904: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b908: 0xac6012b0  sw          $zero, 0x12B0($v1)
    ctx->pc = 0x31b908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 0));
    // 0x31b90c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x31b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b910: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31b914: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x31b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x31b918: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31b918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b91c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x31b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x31b920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b924: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b928: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b92c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b930: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b934: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b938: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b93c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b940: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x31b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31b944: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x31b944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x31b948: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x31b948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_31b94c:
    // 0x31b94c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31b94cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b950: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31b954: 0x3e00008  jr          $ra
    ctx->pc = 0x31B954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B95Cu;
}
