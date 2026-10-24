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

// Function: Set_lightning
// Address: 0x268440 - 0x2686c8
void Set_lightning_0x268440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_lightning_0x268440");
#endif

    switch (ctx->pc) {
        case 0x26846cu: goto label_26846c;
        case 0x268488u: goto label_268488;
        case 0x2684b4u: goto label_2684b4;
        case 0x26856cu: goto label_26856c;
        case 0x268600u: goto label_268600;
        case 0x268690u: goto label_268690;
        case 0x2686b8u: goto label_2686b8;
        default: break;
    }

    ctx->pc = 0x268440u;

    // 0x268440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x268440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x268444: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x268444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x268448: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x268448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26844c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x26844cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x268450: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x268450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x268454: 0x2442bdc0  addiu       $v0, $v0, -0x4240
    ctx->pc = 0x268454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
    // 0x268458: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x268458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26845c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x26845cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BDC0u));
    // 0x268460: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x268460u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x268464: 0xc067648  jal         func_19D920
    ctx->pc = 0x268464u;
    SET_GPR_U32(ctx, 31, 0x26846Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x268464u, 0x26846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26846Cu;
label_26846c:
    // 0x26846c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x268470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268474: 0x0  nop
    ctx->pc = 0x268474u;
    // NOP
    // 0x268478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26847c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26847cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x268480: 0xc067648  jal         func_19D920
    ctx->pc = 0x268480u;
    SET_GPR_U32(ctx, 31, 0x268488u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x268480u, 0x268488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268488u;
label_268488:
    // 0x268488: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x268488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26848c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26848cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268490: 0x0  nop
    ctx->pc = 0x268490u;
    // NOP
    // 0x268494: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x268494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268498: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x268498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26849c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26849cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2684a0: 0x0  nop
    ctx->pc = 0x2684a0u;
    // NOP
    // 0x2684a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2684a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2684a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2684a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2684ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2684ACu;
    SET_GPR_U32(ctx, 31, 0x2684B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2684ACu, 0x2684B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684B4u;
label_2684b4:
    // 0x2684b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2684b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2684b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2684b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2684bc: 0x0  nop
    ctx->pc = 0x2684bcu;
    // NOP
    // 0x2684c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2684c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2684c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2684c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2684c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2684c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2684cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2684ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2684d0: 0x0  nop
    ctx->pc = 0x2684d0u;
    // NOP
    // 0x2684d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2684d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2684d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2684d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2684dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2684e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2684e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2684e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2684e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2684e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2684ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2684ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2684f0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2684f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2684f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2684f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2684f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2684fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2684fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268500: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268508: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x268508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x26850c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26850cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268510: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x268510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268514: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268518: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x268518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x26851c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268524: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x268524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x268528: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x268528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26852c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x26852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x268530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268534: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x268534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x268538: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x268538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26853c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x26853cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x268540: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x268540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x268544: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x268544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268548: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x268548u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26854c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26854cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x268550: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x268550u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268554: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x268554u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268558: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x268558u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26855c: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x26855cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268560: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x268560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268564: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x268564u;
    SET_GPR_U32(ctx, 31, 0x26856Cu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x268564u, 0x26856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26856Cu;
label_26856c:
    // 0x26856c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x26856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x268570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268574: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268578: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x26857c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x26857cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268580: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26858c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x26858cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x268590: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268594: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268594u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x268598: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x268598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26859c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26859cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2685a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2685a4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2685a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2685a8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2685a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2685ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2685acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2685b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2685b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2685b4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2685b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2685b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2685b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2685bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2685bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2685c0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x2685c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2685c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2685c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2685c8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2685c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2685cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2685ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2685d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2685d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2685d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2685d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2685d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2685d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2685dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2685dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2685e0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2685e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2685e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2685e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2685e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2685e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2685ec: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x2685ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2685f0: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2685f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2685f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2685f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2685f8: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2685F8u;
    SET_GPR_U32(ctx, 31, 0x268600u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2685F8u, 0x268600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268600u;
label_268600:
    // 0x268600: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x268600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x268604: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x268604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x268608: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x26860c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x26860cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x268610: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x268610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268614: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26861c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26861cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268620: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x268620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x268624: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268628: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x26862c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x26862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268630: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268638: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x268638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x26863c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x268640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268644: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268648: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x268648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x26864c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26864cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268654: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x268654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x268658: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x268658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x26865c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26865cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268660: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x268660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x268664: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x268664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x268668: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x268668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26866c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26866cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268670: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x268670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x268674: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x268674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268678: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x268678u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26867c: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x26867cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268680: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x268680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268684: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x268684u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268688: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x268688u;
    SET_GPR_U32(ctx, 31, 0x268690u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x268688u, 0x268690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268690u;
label_268690:
    // 0x268690: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x268690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x268694: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x268694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268698: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x268698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x26869c: 0x2442fd10  addiu       $v0, $v0, -0x2F0
    ctx->pc = 0x26869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x2686a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2686a0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x61FD10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x61FD10u, _value); } while (0);
    // 0x2686a4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2686a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2686a8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2686a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2686ac: 0x244586d0  addiu       $a1, $v0, -0x7930
    ctx->pc = 0x2686acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936272));
    // 0x2686b0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x2686B0u;
    SET_GPR_U32(ctx, 31, 0x2686B8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x2686B0u, 0x2686B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686B8u;
label_2686b8:
    // 0x2686b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2686b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2686bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2686bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2686c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2686C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686C8u;
}
