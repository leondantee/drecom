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

// Function: ectrl20_move20
// Address: 0x2543a0 - 0x254550
void ectrl20_move20_0x2543a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl20_move20_0x2543a0");
#endif

    switch (ctx->pc) {
        case 0x2543d8u: goto label_2543d8;
        case 0x254428u: goto label_254428;
        case 0x254434u: goto label_254434;
        case 0x254534u: goto label_254534;
        case 0x254540u: goto label_254540;
        default: break;
    }

    ctx->pc = 0x2543a0u;

    // 0x2543a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2543a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2543a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2543a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2543a8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2543a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2543ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2543acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2543b0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2543b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2543b4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2543B4u;
    {
        const bool branch_taken_0x2543b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2543b4) {
            ctx->pc = 0x254434u;
            goto label_254434;
        }
    }
    ctx->pc = 0x2543BCu;
    // 0x2543bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2543c0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2543c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2543c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2543c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2543c8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2543c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2543cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2543ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2543d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2543D0u;
    SET_GPR_U32(ctx, 31, 0x2543D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2543D0u, 0x2543D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543D8u;
label_2543d8:
    // 0x2543d8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2543d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2543dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2543dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2543e0: 0x0  nop
    ctx->pc = 0x2543e0u;
    // NOP
    // 0x2543e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2543e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2543e8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2543e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2543ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2543ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2543f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2543f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2543f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2543f8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2543f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2543fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2543fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254400: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x254400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x254404: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x254404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x254408: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x254408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25440c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x254410: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x254410u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254414: 0x24047803  addiu       $a0, $zero, 0x7803
    ctx->pc = 0x254414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30723));
    // 0x254418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x254418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25441c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x25441cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x254420: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x254420u;
    SET_GPR_U32(ctx, 31, 0x254428u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x254420u, 0x254428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254428u;
label_254428:
    // 0x254428: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x254428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25442c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25442Cu;
    SET_GPR_U32(ctx, 31, 0x254434u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25442Cu, 0x254434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254434u;
label_254434:
    // 0x254434: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254438: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x25443c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25443cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254440: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25444c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x25444cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x254450: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254454: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x254458: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25445c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25445cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254464: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x254464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x254468: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x254468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x25446c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x254470: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254474: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x254474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x254478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25447c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x25447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x254480: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x254480u;
    {
        const bool branch_taken_0x254480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254480) {
            ctx->pc = 0x254540u;
            goto label_254540;
        }
    }
    ctx->pc = 0x254488u;
    // 0x254488: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x254488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25448c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254490: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x254490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x254494: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254498: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x254498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25449c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2544a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2544a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2544a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2544a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2544a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2544a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2544ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2544acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2544b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2544b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2544b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2544b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2544b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2544b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2544bc: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2544bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2544c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2544c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2544c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2544c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2544c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2544c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2544cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2544ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2544d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2544d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2544d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2544d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2544d8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2544d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2544dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2544dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2544e0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2544e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2544e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2544e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2544e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2544e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2544ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2544ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2544f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2544f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2544f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2544f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2544f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2544f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2544fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2544fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254500: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254504: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x254504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x254508: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x254508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25450c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x254510: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x254510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x254514: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x254514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x254518: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x254518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25451c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25451cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254520: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x254520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x254524: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x254524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x254528: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x254528u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25452c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x25452Cu;
    SET_GPR_U32(ctx, 31, 0x254534u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x25452Cu, 0x254534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254534u;
label_254534:
    // 0x254534: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x254534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x254538: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x254538u;
    SET_GPR_U32(ctx, 31, 0x254540u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x254538u, 0x254540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254540u;
label_254540:
    // 0x254540: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x254540u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254544: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254548: 0x3e00008  jr          $ra
    ctx->pc = 0x254548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254550u;
}
