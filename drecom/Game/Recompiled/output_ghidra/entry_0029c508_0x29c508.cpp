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

// Function: entry_0029c508
// Address: 0x29c508 - 0x29c608
void entry_0029c508_0x29c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c508_0x29c508");
#endif

    switch (ctx->pc) {
        case 0x29c57cu: goto label_29c57c;
        case 0x29c5f0u: goto label_29c5f0;
        default: break;
    }

    ctx->pc = 0x29c508u;

    // 0x29c508: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c50c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c510: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c514: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c518: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c51c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c520: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29c520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c524: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x29c524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c528: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c530: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c534: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c538: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29c53c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c540: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29c540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c544: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c548: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x29c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c54c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c550: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c554: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29c558: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c55c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c564: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29c568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c56c: 0x0  nop
    ctx->pc = 0x29c56cu;
    // NOP
    // 0x29c570: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x29c570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c574: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x29C574u;
    SET_GPR_U32(ctx, 31, 0x29C57Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x29C574u, 0x29C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C57Cu;
label_29c57c:
    // 0x29c57c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c580: 0x0  nop
    ctx->pc = 0x29c580u;
    // NOP
    // 0x29c584: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29c584u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c588: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x29c588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29c58c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c58cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c594: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c598: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c59c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29c5a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c5a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c5a8: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x29c5a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c5ac: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x29c5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c5b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c5b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c5b8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x29c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29c5bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29c5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c5c8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29c5cc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5d0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c5d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29c5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c5e0: 0x0  nop
    ctx->pc = 0x29c5e0u;
    // NOP
    // 0x29c5e4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x29c5e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c5e8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x29C5E8u;
    SET_GPR_U32(ctx, 31, 0x29C5F0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x29C5E8u, 0x29C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5F0u;
label_29c5f0:
    // 0x29c5f0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5f4: 0x0  nop
    ctx->pc = 0x29c5f4u;
    // NOP
    // 0x29c5f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29c5f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c5fc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x29c5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29c600: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29c600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29c604: 0x0  nop
    ctx->pc = 0x29c604u;
    // NOP
    ctx->pc = 0x29c608u;
}
