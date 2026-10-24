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

// Function: entry_00324384
// Address: 0x324384 - 0x3244fc
void entry_00324384_0x324384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324384_0x324384");
#endif

    switch (ctx->pc) {
        case 0x324404u: goto label_324404;
        case 0x324420u: goto label_324420;
        case 0x32443cu: goto label_32443c;
        case 0x324458u: goto label_324458;
        default: break;
    }

    ctx->pc = 0x324384u;

    // 0x324384: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324388: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x324388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x32438c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32438cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x324390: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x324390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x324394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x324394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x324398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x324398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32439c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x32439cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3243a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3243a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3243a4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3243a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3243a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3243a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3243ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3243acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3243b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3243b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3243b4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3243b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3243b8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3243b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3243bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3243bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3243c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3243c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3243c4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x3243c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3243c8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3243c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3243cc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3243ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3243d0: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x3243d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3243d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3243d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3243d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3243d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3243dc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3243dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3243e0: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x3243e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3243e4: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x3243e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3243e8: 0x0  nop
    ctx->pc = 0x3243e8u;
    // NOP
    // 0x3243ec: 0x0  nop
    ctx->pc = 0x3243ecu;
    // NOP
    // 0x3243f0: 0x1810  mfhi        $v1
    ctx->pc = 0x3243f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3243f4: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3243F4u;
    {
        const bool branch_taken_0x3243f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3243f4) {
            ctx->pc = 0x3244FCu;
            return;
        }
    }
    ctx->pc = 0x3243FCu;
    // 0x3243fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x3243FCu;
    SET_GPR_U32(ctx, 31, 0x324404u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3243FCu, 0x324404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324404u;
label_324404:
    // 0x324404: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x324404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x324408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32440c: 0x0  nop
    ctx->pc = 0x32440cu;
    // NOP
    // 0x324410: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324414: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x324414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x324418: 0xc067648  jal         func_19D920
    ctx->pc = 0x324418u;
    SET_GPR_U32(ctx, 31, 0x324420u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324418u, 0x324420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324420u;
label_324420:
    // 0x324420: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x324424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324428: 0x0  nop
    ctx->pc = 0x324428u;
    // NOP
    // 0x32442c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32442cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324430: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x324430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x324434: 0xc067648  jal         func_19D920
    ctx->pc = 0x324434u;
    SET_GPR_U32(ctx, 31, 0x32443Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324434u, 0x32443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32443Cu;
label_32443c:
    // 0x32443c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x32443cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x324440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324444: 0x0  nop
    ctx->pc = 0x324444u;
    // NOP
    // 0x324448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32444c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x32444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x324450: 0xc067648  jal         func_19D920
    ctx->pc = 0x324450u;
    SET_GPR_U32(ctx, 31, 0x324458u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324450u, 0x324458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324458u;
label_324458:
    // 0x324458: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x324458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x32445c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32445cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324460: 0x0  nop
    ctx->pc = 0x324460u;
    // NOP
    // 0x324464: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324468: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x324468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32446c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32446cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324470: 0x0  nop
    ctx->pc = 0x324470u;
    // NOP
    // 0x324474: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x324474u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324478: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32447c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32447cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324480: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324484: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32448c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324490: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324494: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324498: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32449c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3244a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3244a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3244a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3244a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3244a8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3244a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3244ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3244acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3244b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3244b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3244b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3244b8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3244b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3244bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3244bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3244c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3244c4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3244c4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3244c8: 0x0  nop
    ctx->pc = 0x3244c8u;
    // NOP
    // 0x3244cc: 0x0  nop
    ctx->pc = 0x3244ccu;
    // NOP
    // 0x3244d0: 0x1810  mfhi        $v1
    ctx->pc = 0x3244d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3244d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3244d8: 0x2442a0f8  addiu       $v0, $v0, -0x5F08
    ctx->pc = 0x3244d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942968));
    // 0x3244dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3244e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3244e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3244e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3244e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3244e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3244e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3244ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3244ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3244f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3244f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3244f4: 0xc0861dc  jal         func_218770
    ctx->pc = 0x3244F4u;
    SET_GPR_U32(ctx, 31, 0x3244FCu);
    ctx->pc = 0x218770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218770u, 0x3244F4u, 0x3244FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244FCu;
}
