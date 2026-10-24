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

// Function: entry_00324278
// Address: 0x324278 - 0x324384
void entry_00324278_0x324278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324278_0x324278");
#endif

    ctx->pc = 0x324278u;

    // 0x324278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32427c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x32427cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324280: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x324280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x324284: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x324288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32428c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324290: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324294: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324298: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32429c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3242a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3242a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3242a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3242a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3242a8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3242a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3242ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3242acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3242b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3242b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3242b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3242b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3242b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3242bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3242bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3242c0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3242c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3242c4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3242c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3242c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3242c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3242cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3242ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3242d0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3242d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3242d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3242d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3242d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3242d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3242dc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3242dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3242e0: 0x0  nop
    ctx->pc = 0x3242e0u;
    // NOP
    // 0x3242e4: 0x0  nop
    ctx->pc = 0x3242e4u;
    // NOP
    // 0x3242e8: 0x1810  mfhi        $v1
    ctx->pc = 0x3242e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3242ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3242ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3242f0: 0x2442a0e8  addiu       $v0, $v0, -0x5F18
    ctx->pc = 0x3242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942952));
    // 0x3242f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3242f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3242f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3242f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3242fc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3242fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324300: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324304: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324308: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32430c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32430cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324318: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32431c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324320: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324320u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324324: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324328: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32432c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324330: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324334: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324334u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324338: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32433c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32433cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324340: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x324344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324348: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x324348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x32434c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x32434cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x324350: 0x0  nop
    ctx->pc = 0x324350u;
    // NOP
    // 0x324354: 0x0  nop
    ctx->pc = 0x324354u;
    // NOP
    // 0x324358: 0x4010  mfhi        $t0
    ctx->pc = 0x324358u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x32435c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32435cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x324360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x324360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x324364: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x324364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324368: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x324368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32436c: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x32436cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324370: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x324370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324374: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x324374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324378: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x324378u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32437c: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x32437Cu;
    SET_GPR_U32(ctx, 31, 0x324384u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x32437Cu, 0x324384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324384u;
}
