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

// Function: Em1b_morph
// Address: 0x36d3f0 - 0x36d688
void Em1b_morph_0x36d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_morph_0x36d3f0");
#endif

    switch (ctx->pc) {
        case 0x36d518u: goto label_36d518;
        case 0x36d584u: goto label_36d584;
        case 0x36d5bcu: goto label_36d5bc;
        case 0x36d5f4u: goto label_36d5f4;
        case 0x36d62cu: goto label_36d62c;
        case 0x36d63cu: goto label_36d63c;
        case 0x36d658u: goto label_36d658;
        case 0x36d668u: goto label_36d668;
        case 0x36d678u: goto label_36d678;
        default: break;
    }

    ctx->pc = 0x36d3f0u;

    // 0x36d3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d3f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36d3f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36d3fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d400: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x36d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x36d404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d408: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x36D408u;
    {
        const bool branch_taken_0x36d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d408) {
            ctx->pc = 0x36D62Cu;
            goto label_36d62c;
        }
    }
    ctx->pc = 0x36D410u;
    // 0x36d410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d414: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d418: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x36d418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d41c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d420: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x36D420u;
    {
        const bool branch_taken_0x36d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d420) {
            ctx->pc = 0x36D4ECu;
            goto label_36d4ec;
        }
    }
    ctx->pc = 0x36D428u;
    // 0x36d428: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d42c: 0x24421338  addiu       $v0, $v0, 0x1338
    ctx->pc = 0x36d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d430: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x36d430u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x36d434: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36d434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36d438: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36d438u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36d43c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36d43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d440: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36d44c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36d450: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36d450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36d454: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36d454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36d458: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36d458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d45c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d464: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36d464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36d468: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36d468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36d46c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36d470: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36d470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36d474: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36d474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36d478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36d478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36d47c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36d480: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x36d480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d484: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36d484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36d488: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36d488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36d48c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36d48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d490: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36d49c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36d4a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36d4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36d4a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36d4a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36d4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d4ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d4b4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36d4b8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36d4bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36d4c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36d4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36d4c4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36d4c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36d4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36d4cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36d4d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x36d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36d4d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36d4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d4d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d4dc: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d4e0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x36d4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x36d4e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x36D4E4u;
    {
        const bool branch_taken_0x36d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d4e4) {
            ctx->pc = 0x36D510u;
            goto label_36d510;
        }
    }
    ctx->pc = 0x36D4ECu;
label_36d4ec:
    // 0x36d4ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d4f0: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d4f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x36d4f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d4f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d4fc: 0x24421338  addiu       $v0, $v0, 0x1338
    ctx->pc = 0x36d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d500: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x36d500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x36d504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d508: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d50c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x36d50cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_36d510:
    // 0x36d510: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x36D510u;
    SET_GPR_U32(ctx, 31, 0x36D518u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x36D510u, 0x36D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D518u;
label_36d518:
    // 0x36d518: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x36d518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x36d51c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x36d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x36d520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d524: 0x0  nop
    ctx->pc = 0x36d524u;
    // NOP
    // 0x36d528: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36d528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d52c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x36d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x36d530: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x36d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x36d534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d538: 0x0  nop
    ctx->pc = 0x36d538u;
    // NOP
    // 0x36d53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d544: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d548: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36d548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36d54c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d550: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d558: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d55c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d560: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d564: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d568: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x36d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36d56c: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d56cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d570: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d570u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d574: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d578: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d57c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D57Cu;
    SET_GPR_U32(ctx, 31, 0x36D584u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D57Cu, 0x36D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D584u;
label_36d584:
    // 0x36d584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d588: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d58c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d590: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d594: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d598: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d59c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5a0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36d5a4: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d5a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d5a8: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d5a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d5ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d5b0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d5b4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D5B4u;
    SET_GPR_U32(ctx, 31, 0x36D5BCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D5B4u, 0x36D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5BCu;
label_36d5bc:
    // 0x36d5bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5c0: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d5c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5c8: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d5cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5d0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d5d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5d8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x36d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x36d5dc: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d5dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d5e0: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d5e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d5e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d5e8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d5ec: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D5ECu;
    SET_GPR_U32(ctx, 31, 0x36D5F4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D5ECu, 0x36D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5F4u;
label_36d5f4:
    // 0x36d5f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5f8: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d5fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d600: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d608: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d60c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d610: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x36d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36d614: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d614u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d618: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d618u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d61c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d620: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d624: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D624u;
    SET_GPR_U32(ctx, 31, 0x36D62Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D624u, 0x36D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D62Cu;
label_36d62c:
    // 0x36d62c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d630: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x36d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36d634: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D634u;
    SET_GPR_U32(ctx, 31, 0x36D63Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D634u, 0x36D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D63Cu;
label_36d63c:
    // 0x36d63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d640: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x36d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x36d644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36d644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36d648: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d64c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36d650: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D650u;
    SET_GPR_U32(ctx, 31, 0x36D658u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D650u, 0x36D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D658u;
label_36d658:
    // 0x36d658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d65c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x36d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x36d660: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D660u;
    SET_GPR_U32(ctx, 31, 0x36D668u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D660u, 0x36D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D668u;
label_36d668:
    // 0x36d668: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d66c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x36d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36d670: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x36D670u;
    SET_GPR_U32(ctx, 31, 0x36D678u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x36D670u, 0x36D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D678u;
label_36d678:
    // 0x36d678: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36d678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d67c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36d67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36d680: 0x3e00008  jr          $ra
    ctx->pc = 0x36D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D688u;
}
