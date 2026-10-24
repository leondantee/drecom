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

// Function: entry_002821b8
// Address: 0x2821b8 - 0x282370
void entry_002821b8_0x2821b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002821b8_0x2821b8");
#endif

    switch (ctx->pc) {
        case 0x282258u: goto label_282258;
        case 0x28231cu: goto label_28231c;
        case 0x282338u: goto label_282338;
        case 0x28235cu: goto label_28235c;
        case 0x282368u: goto label_282368;
        default: break;
    }

    ctx->pc = 0x2821b8u;

    // 0x2821b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2821bc: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2821bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2821c0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2821c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2821c4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2821c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2821c8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2821c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2821cc: 0x12030068  beq         $s0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2821CCu;
    {
        const bool branch_taken_0x2821cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2821cc) {
            ctx->pc = 0x282370u;
            return;
        }
    }
    ctx->pc = 0x2821D4u;
    // 0x2821d4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2821d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2821d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2821d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2821dc: 0x0  nop
    ctx->pc = 0x2821dcu;
    // NOP
    // 0x2821e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2821e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2821e4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2821e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2821e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2821e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2821ec: 0x0  nop
    ctx->pc = 0x2821ecu;
    // NOP
    // 0x2821f0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2821f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2821f4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2821f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2821f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2821f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2821fc: 0x0  nop
    ctx->pc = 0x2821fcu;
    // NOP
    // 0x282200: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x282200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x282204: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x282204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x282208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28220c: 0x0  nop
    ctx->pc = 0x28220cu;
    // NOP
    // 0x282210: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x282210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x282214: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x282214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x282218: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x282218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x28221c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28221cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282220: 0x0  nop
    ctx->pc = 0x282220u;
    // NOP
    // 0x282224: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x282224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x282228: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x282228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x28222c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x28222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x282230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282234: 0x0  nop
    ctx->pc = 0x282234u;
    // NOP
    // 0x282238: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x282238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x28223c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x28223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x282240: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x282240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x282244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282248: 0x0  nop
    ctx->pc = 0x282248u;
    // NOP
    // 0x28224c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x28224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x282250: 0xc067648  jal         func_19D920
    ctx->pc = 0x282250u;
    SET_GPR_U32(ctx, 31, 0x282258u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x282250u, 0x282258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282258u;
label_282258:
    // 0x282258: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x28225c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x28225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x282260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282264: 0x0  nop
    ctx->pc = 0x282264u;
    // NOP
    // 0x282268: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28226c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x282270: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x282270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x282274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282278: 0x0  nop
    ctx->pc = 0x282278u;
    // NOP
    // 0x28227c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28227cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282280: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x282280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x282284: 0x3c024417  lui         $v0, 0x4417
    ctx->pc = 0x282284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17431 << 16));
    // 0x282288: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x282288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28228c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282290: 0x0  nop
    ctx->pc = 0x282290u;
    // NOP
    // 0x282294: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x282294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x282298: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x282298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x28229c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822a0: 0x0  nop
    ctx->pc = 0x2822a0u;
    // NOP
    // 0x2822a4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2822a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2822a8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2822a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2822ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2822acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822b0: 0x0  nop
    ctx->pc = 0x2822b0u;
    // NOP
    // 0x2822b4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2822b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2822b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2822b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2822bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2822bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822c0: 0x0  nop
    ctx->pc = 0x2822c0u;
    // NOP
    // 0x2822c4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2822c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2822c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2822c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2822cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2822ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822d0: 0x0  nop
    ctx->pc = 0x2822d0u;
    // NOP
    // 0x2822d4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x2822d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x2822d8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2822d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2822dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2822dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2822e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2822e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822e4: 0x0  nop
    ctx->pc = 0x2822e4u;
    // NOP
    // 0x2822e8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2822e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2822ec: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2822ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2822f0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2822f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2822f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2822f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822f8: 0x0  nop
    ctx->pc = 0x2822f8u;
    // NOP
    // 0x2822fc: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2822fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x282300: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x282300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x282304: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x282304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x282308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28230c: 0x0  nop
    ctx->pc = 0x28230cu;
    // NOP
    // 0x282310: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x282310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x282314: 0xc067648  jal         func_19D920
    ctx->pc = 0x282314u;
    SET_GPR_U32(ctx, 31, 0x28231Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x282314u, 0x28231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28231Cu;
label_28231c:
    // 0x28231c: 0x3c023c13  lui         $v0, 0x3C13
    ctx->pc = 0x28231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15379 << 16));
    // 0x282320: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x282320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x282324: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282328: 0x0  nop
    ctx->pc = 0x282328u;
    // NOP
    // 0x28232c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28232cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282330: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x282330u;
    SET_GPR_U32(ctx, 31, 0x282338u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x282330u, 0x282338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282338u;
label_282338:
    // 0x282338: 0x3c033f74  lui         $v1, 0x3F74
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16244 << 16));
    // 0x28233c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x28233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x282340: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x282340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x282344: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x282344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x282348: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x282348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x28234c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28234cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x282350: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x282350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282354: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x282354u;
    SET_GPR_U32(ctx, 31, 0x28235Cu);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x282354u, 0x28235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28235Cu;
label_28235c:
    // 0x28235c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28235cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282360: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x282360u;
    SET_GPR_U32(ctx, 31, 0x282368u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x282360u, 0x282368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282368u;
label_282368:
    // 0x282368: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x282368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x28236c: 0x0  nop
    ctx->pc = 0x28236cu;
    // NOP
    ctx->pc = 0x282370u;
}
