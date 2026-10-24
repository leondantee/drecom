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

// Function: entry_002ff3ec
// Address: 0x2ff3ec - 0x2ff6b0
void entry_002ff3ec_0x2ff3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ff3ec_0x2ff3ec");
#endif

    switch (ctx->pc) {
        case 0x2ff46cu: goto label_2ff46c;
        case 0x2ff49cu: goto label_2ff49c;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff520u: goto label_2ff520;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff6a4u: goto label_2ff6a4;
        default: break;
    }

    ctx->pc = 0x2ff3ecu;

    // 0x2ff3ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff3f0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2ff3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff3f4: 0x2861001c  slti        $at, $v1, 0x1C
    ctx->pc = 0x2ff3f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2ff3f8: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
    ctx->pc = 0x2FF3F8u;
    {
        const bool branch_taken_0x2ff3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3f8) {
            ctx->pc = 0x2FF6B0u;
            return;
        }
    }
    ctx->pc = 0x2FF400u;
    // 0x2ff400: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff404: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff408: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff40c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff414: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ff414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff418: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2ff418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ff41c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff420: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ff420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ff424: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ff424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ff428: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ff42c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff430: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ff430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ff434: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x2ff434u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ff438: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2ff438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ff43c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ff43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ff440: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ff440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ff444: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ff444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff448: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff44c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ff44cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ff450: 0x0  nop
    ctx->pc = 0x2ff450u;
    // NOP
    // 0x2ff454: 0x0  nop
    ctx->pc = 0x2ff454u;
    // NOP
    // 0x2ff458: 0x1810  mfhi        $v1
    ctx->pc = 0x2ff458u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ff45c: 0x1460030f  bnez        $v1, . + 4 + (0x30F << 2)
    ctx->pc = 0x2FF45Cu;
    {
        const bool branch_taken_0x2ff45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff45c) {
            ctx->pc = 0x30009Cu;
            return;
        }
    }
    ctx->pc = 0x2FF464u;
    // 0x2ff464: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF464u;
    SET_GPR_U32(ctx, 31, 0x2FF46Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF464u, 0x2FF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF46Cu;
label_2ff46c:
    // 0x2ff46c: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x2ff46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff470: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ff470u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff474: 0x0  nop
    ctx->pc = 0x2ff474u;
    // NOP
    // 0x2ff478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff47c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ff47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ff480: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2ff480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2ff484: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x2ff484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ff488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff48c: 0x0  nop
    ctx->pc = 0x2ff48cu;
    // NOP
    // 0x2ff490: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ff490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ff494: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF494u;
    SET_GPR_U32(ctx, 31, 0x2FF49Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF494u, 0x2FF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF49Cu;
label_2ff49c:
    // 0x2ff49c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ff49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4a4: 0x0  nop
    ctx->pc = 0x2ff4a4u;
    // NOP
    // 0x2ff4a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff4ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ff4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ff4b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff4b8: 0x0  nop
    ctx->pc = 0x2ff4b8u;
    // NOP
    // 0x2ff4bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ff4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ff4c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF4C0u;
    SET_GPR_U32(ctx, 31, 0x2FF4C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF4C0u, 0x2FF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4C8u;
label_2ff4c8:
    // 0x2ff4c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff4cc: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2ff4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2ff4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4d4: 0x0  nop
    ctx->pc = 0x2ff4d4u;
    // NOP
    // 0x2ff4d8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff4dc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ff4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ff4e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4e4: 0x0  nop
    ctx->pc = 0x2ff4e4u;
    // NOP
    // 0x2ff4e8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff4e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff4ec: 0x3c0445ab  lui         $a0, 0x45AB
    ctx->pc = 0x2ff4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff4f0: 0x3483e000  ori         $v1, $a0, 0xE000
    ctx->pc = 0x2ff4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x2ff4f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff4f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4f8: 0x0  nop
    ctx->pc = 0x2ff4f8u;
    // NOP
    // 0x2ff4fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff4fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff500: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff504: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ff504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ff508: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x2ff508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x2ff50c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff510: 0x0  nop
    ctx->pc = 0x2ff510u;
    // NOP
    // 0x2ff514: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ff514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ff518: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF518u;
    SET_GPR_U32(ctx, 31, 0x2FF520u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF518u, 0x2FF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF520u;
label_2ff520:
    // 0x2ff520: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff524: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2ff524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ff528: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff52c: 0x0  nop
    ctx->pc = 0x2ff52cu;
    // NOP
    // 0x2ff530: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff534: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2ff534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2ff538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff53c: 0x0  nop
    ctx->pc = 0x2ff53cu;
    // NOP
    // 0x2ff540: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff544: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x2ff544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff548: 0x3466e000  ori         $a2, $v1, 0xE000
    ctx->pc = 0x2ff548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x2ff54c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2ff54cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff550: 0x0  nop
    ctx->pc = 0x2ff550u;
    // NOP
    // 0x2ff554: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff55c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ff55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ff560: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2ff560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff564: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ff564u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff568: 0x0  nop
    ctx->pc = 0x2ff568u;
    // NOP
    // 0x2ff56c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ff56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ff570: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2ff570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff574: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ff574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff578: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff57c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff580: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff584: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2ff584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff588: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2ff588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2ff58c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2ff58cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff590: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ff590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff594: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2ff594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2ff598: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff59c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff5a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff5a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff5a8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2ff5a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff5ac: 0x1072825  or          $a1, $t0, $a3
    ctx->pc = 0x2ff5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2ff5b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff5b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ff5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff5b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff5bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff5c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff5c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff5c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ff5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff5cc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ff5ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff5d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff5d4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff5d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ff5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ff5dc: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x2ff5dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff5e0: 0x131c38  dsll        $v1, $s3, 16
    ctx->pc = 0x2ff5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 16);
    // 0x2ff5e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff5e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ff5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ff5ec: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2ff5ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2ff5f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff5f4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2ff5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff5f8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff5fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff600: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff604: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff608: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2ff608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff60c: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x2ff60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2ff610: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x2ff610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff614: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff618: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ff618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff61c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ff61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff620: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff624: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff628: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff62c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ff630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff634: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x2ff634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2ff638: 0x24043302  addiu       $a0, $zero, 0x3302
    ctx->pc = 0x2ff638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13058));
    // 0x2ff63c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FF63Cu;
    SET_GPR_U32(ctx, 31, 0x2FF644u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FF63Cu, 0x2FF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF644u;
label_2ff644:
    // 0x2ff644: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff648: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FF648u;
    SET_GPR_U32(ctx, 31, 0x2FF650u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FF648u, 0x2FF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF650u;
label_2ff650:
    // 0x2ff650: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2ff650u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff654: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff658: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ff658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ff65c: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x2ff65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x2ff660: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ff660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ff664: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff668: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ff668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff66c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ff66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff670: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff674: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff678: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ff678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2ff67c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x2ff67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff680: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ff680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ff684: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ff684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ff688: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff68c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff690: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FF690u;
    SET_GPR_U32(ctx, 31, 0x2FF698u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FF690u, 0x2FF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF698u;
label_2ff698:
    // 0x2ff698: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff69c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FF69Cu;
    SET_GPR_U32(ctx, 31, 0x2FF6A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FF69Cu, 0x2FF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6A4u;
label_2ff6a4:
    // 0x2ff6a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ff6a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff6a8: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x2FF6A8u;
    {
        const bool branch_taken_0x2ff6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff6a8) {
            ctx->pc = 0x30009Cu;
            return;
        }
    }
    ctx->pc = 0x2FF6B0u;
}
