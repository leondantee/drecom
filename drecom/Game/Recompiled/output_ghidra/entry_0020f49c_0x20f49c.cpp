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

// Function: entry_0020f49c
// Address: 0x20f49c - 0x20f628
void entry_0020f49c_0x20f49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f49c_0x20f49c");
#endif

    switch (ctx->pc) {
        case 0x20f568u: goto label_20f568;
        case 0x20f588u: goto label_20f588;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f624u: goto label_20f624;
        default: break;
    }

    ctx->pc = 0x20f49cu;

    // 0x20f49c: 0x8fb60528  lw          $s6, 0x528($sp)
    ctx->pc = 0x20f49cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f4a0: 0x86c61278  lh          $a2, 0x1278($s6)
    ctx->pc = 0x20f4a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4728)));
    // 0x20f4a4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x20f4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20f4a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20f4a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x20f4ac: 0x28e102bc  slti        $at, $a3, 0x2BC
    ctx->pc = 0x20f4acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x20f4b0: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x20F4B0u;
    {
        const bool branch_taken_0x20f4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f4b0) {
            ctx->pc = 0x20F628u;
            return;
        }
    }
    ctx->pc = 0x20F4B8u;
    // 0x20f4b8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x20f4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x20f4bc: 0x2509a340  addiu       $t1, $t0, -0x5CC0
    ctx->pc = 0x20f4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943552));
    // 0x20f4c0: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x20f4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20f4c4: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x20f4c4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A340u));
    // 0x20f4c8: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x20f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x20f4cc: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x20f4d0: 0x2684a350  addiu       $a0, $s4, -0x5CB0
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943568));
    // 0x20f4d4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20f4d8: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x20f4d8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38A350u));
    // 0x20f4dc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x20f4e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f4e4: 0x2465a360  addiu       $a1, $v1, -0x5CA0
    ctx->pc = 0x20f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943584));
    // 0x20f4e8: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x20f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x20f4ec: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x20f4ecu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38A360u));
    // 0x20f4f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x20f4f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20f4f8: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x20f4f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f4fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f500: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x20f504: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x20f504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x20f508: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x20f508u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20f50c: 0x1684821  addu        $t1, $t3, $t0
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x20f510: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x20f510u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x20f514: 0xa2200  sll         $a0, $t2, 8
    ctx->pc = 0x20f514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x20f518: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f51c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20f520: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x20f520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20f524: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x20f524u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20f528: 0x1464821  addu        $t1, $t2, $a2
    ctx->pc = 0x20f528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x20f52c: 0x3123ff00  andi        $v1, $t1, 0xFF00
    ctx->pc = 0x20f52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x20f530: 0x35202  srl         $t2, $v1, 8
    ctx->pc = 0x20f530u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x20f534: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x20f538: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20f538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20f53c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20f53cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20f540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20f540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f544: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x20f548: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x20f548u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x20f54c: 0x0  nop
    ctx->pc = 0x20f54cu;
    // NOP
    // 0x20f550: 0x0  nop
    ctx->pc = 0x20f550u;
    // NOP
    // 0x20f554: 0x2010  mfhi        $a0
    ctx->pc = 0x20f554u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20f558: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x20f558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20f55c: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x20f55cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20f560: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F560u;
    SET_GPR_U32(ctx, 31, 0x20F568u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F560u, 0x20F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F568u;
label_20f568:
    // 0x20f568: 0x3c074409  lui         $a3, 0x4409
    ctx->pc = 0x20f568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17417 << 16));
    // 0x20f56c: 0x34f08000  ori         $s0, $a3, 0x8000
    ctx->pc = 0x20f56cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x20f570: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x20f570u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f574: 0x0  nop
    ctx->pc = 0x20f574u;
    // NOP
    // 0x20f578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f57c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x20f57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x20f580: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F580u;
    SET_GPR_U32(ctx, 31, 0x20F588u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F580u, 0x20F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F588u;
label_20f588:
    // 0x20f588: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x20f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
    // 0x20f58c: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x20f58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x20f590: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20f590u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f594: 0x0  nop
    ctx->pc = 0x20f594u;
    // NOP
    // 0x20f598: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f59c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x20f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x20f5a0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20F5A0u;
    SET_GPR_U32(ctx, 31, 0x20F5A8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20F5A0u, 0x20F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5A8u;
label_20f5a8:
    // 0x20f5a8: 0x3c044409  lui         $a0, 0x4409
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17417 << 16));
    // 0x20f5ac: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x20f5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x20f5b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f5b4: 0x0  nop
    ctx->pc = 0x20f5b4u;
    // NOP
    // 0x20f5b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f5bc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x20f5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x20f5c0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20f5c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20f5c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x20f5cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20f5d0: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x20f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x20f5d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f5d8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x20f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x20f5dc: 0x32e900ff  andi        $t1, $s7, 0xFF
    ctx->pc = 0x20f5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x20f5e0: 0x33ca00ff  andi        $t2, $fp, 0xFF
    ctx->pc = 0x20f5e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x20f5e4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x20f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x20f5e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f5ec: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x20f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x20f5f0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x20f5f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f5f4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x20f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x20f5f8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20f5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f5fc: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f600: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x20f600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20f604: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x20f604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20f608: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20f608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f60c: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20f60cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20f610: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x20f610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20f614: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x20f618: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f618u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f61c: 0xc0bb888  jal         func_2EE220
    ctx->pc = 0x20F61Cu;
    SET_GPR_U32(ctx, 31, 0x20F624u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x20F61Cu, 0x20F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F624u;
label_20f624:
    // 0x20f624: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20f624u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20f628u;
}
