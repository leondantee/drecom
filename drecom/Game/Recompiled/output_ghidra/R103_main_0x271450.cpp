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

// Function: R103_main
// Address: 0x271450 - 0x2718bc
void R103_main_0x271450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R103_main_0x271450");
#endif

    switch (ctx->pc) {
        case 0x2714c0u: goto label_2714c0;
        case 0x2716a8u: goto label_2716a8;
        case 0x2716b8u: goto label_2716b8;
        case 0x2716c8u: goto label_2716c8;
        case 0x2716d8u: goto label_2716d8;
        case 0x2716e8u: goto label_2716e8;
        case 0x2716f8u: goto label_2716f8;
        case 0x271710u: goto label_271710;
        case 0x271720u: goto label_271720;
        case 0x271730u: goto label_271730;
        case 0x271740u: goto label_271740;
        case 0x271750u: goto label_271750;
        case 0x271760u: goto label_271760;
        case 0x2717bcu: goto label_2717bc;
        case 0x2717ccu: goto label_2717cc;
        case 0x2717dcu: goto label_2717dc;
        case 0x2717ecu: goto label_2717ec;
        case 0x271824u: goto label_271824;
        case 0x271834u: goto label_271834;
        case 0x271844u: goto label_271844;
        case 0x271854u: goto label_271854;
        default: break;
    }

    ctx->pc = 0x271450u;

    // 0x271450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x271450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x271454: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x271454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x271458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27145c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271464: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x271464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x271468: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x271468u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27146c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x271470: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x271470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x271474: 0x2471bb48  addiu       $s1, $v1, -0x44B8
    ctx->pc = 0x271474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x271478: 0x279280d4  addiu       $s2, $gp, -0x7F2C
    ctx->pc = 0x271478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934740));
    // 0x27147c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27147cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271480: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x271480u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x271484: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x271484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x271488: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x271488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27148c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27148Cu;
    {
        const bool branch_taken_0x27148c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27148c) {
            ctx->pc = 0x2714C0u;
            goto label_2714c0;
        }
    }
    ctx->pc = 0x271494u;
    // 0x271494: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271498: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x271498u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27149c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27149cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2714a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2714a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2714a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2714A4u;
    {
        const bool branch_taken_0x2714a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2714a4) {
            ctx->pc = 0x2714C0u;
            goto label_2714c0;
        }
    }
    ctx->pc = 0x2714ACu;
    // 0x2714ac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2714acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2714b0: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2714b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2714b4: 0x244518c0  addiu       $a1, $v0, 0x18C0
    ctx->pc = 0x2714b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6336));
    // 0x2714b8: 0xc0848cc  jal         func_212330
    ctx->pc = 0x2714B8u;
    SET_GPR_U32(ctx, 31, 0x2714C0u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x2714B8u, 0x2714C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714C0u;
label_2714c0:
    // 0x2714c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2714c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2714c4: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x2714c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2714c8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2714c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2714cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2714ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2714d0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2714D0u;
    {
        const bool branch_taken_0x2714d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2714d0) {
            ctx->pc = 0x271520u;
            goto label_271520;
        }
    }
    ctx->pc = 0x2714D8u;
    // 0x2714d8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2714d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2714dc: 0x3c0345a5  lui         $v1, 0x45A5
    ctx->pc = 0x2714dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17829 << 16));
    // 0x2714e0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2714e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2714e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2714e8: 0x0  nop
    ctx->pc = 0x2714e8u;
    // NOP
    // 0x2714ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2714ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2714f0: 0x0  nop
    ctx->pc = 0x2714f0u;
    // NOP
    // 0x2714f4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2714F4u;
    {
        const bool branch_taken_0x2714f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2714f4) {
            ctx->pc = 0x271520u;
            goto label_271520;
        }
    }
    ctx->pc = 0x2714FCu;
    // 0x2714fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2714fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271500: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x271500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x271504: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x271504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x271508: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x271508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27150c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271510: 0xac231aa4  sw          $v1, 0x1AA4($at)
    ctx->pc = 0x271510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x271514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27151c: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x27151cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
label_271520:
    // 0x271520: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271524: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x271524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD60u));
    // 0x271528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27152c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x27152Cu;
    {
        const bool branch_taken_0x27152c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27152c) {
            ctx->pc = 0x271618u;
            goto label_271618;
        }
    }
    ctx->pc = 0x271534u;
    // 0x271534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271538: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x271538u;
    {
        const bool branch_taken_0x271538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271538) {
            ctx->pc = 0x271594u;
            goto label_271594;
        }
    }
    ctx->pc = 0x271540u;
    // 0x271540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x271540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271544: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271544u;
    {
        const bool branch_taken_0x271544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271544) {
            ctx->pc = 0x271554u;
            goto label_271554;
        }
    }
    ctx->pc = 0x27154Cu;
    // 0x27154c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27154Cu;
    {
        const bool branch_taken_0x27154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27154c) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x271554u;
label_271554:
    // 0x271554: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271558: 0x3c034596  lui         $v1, 0x4596
    ctx->pc = 0x271558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17814 << 16));
    // 0x27155c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27155cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271560: 0x0  nop
    ctx->pc = 0x271560u;
    // NOP
    // 0x271564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271568: 0x0  nop
    ctx->pc = 0x271568u;
    // NOP
    // 0x27156c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x27156Cu;
    {
        const bool branch_taken_0x27156c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27156c) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x271574u;
    // 0x271574: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271578: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27157c: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x27157cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271584: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271588: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x271588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x27158c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27158Cu;
    {
        const bool branch_taken_0x27158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27158c) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x271594u;
label_271594:
    // 0x271594: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271598: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x271598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x27159c: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x27159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x2715a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2715a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2715a4: 0x0  nop
    ctx->pc = 0x2715a4u;
    // NOP
    // 0x2715a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2715a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2715ac: 0x0  nop
    ctx->pc = 0x2715acu;
    // NOP
    // 0x2715b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2715B0u;
    {
        const bool branch_taken_0x2715b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2715b0) {
            ctx->pc = 0x2715D8u;
            goto label_2715d8;
        }
    }
    ctx->pc = 0x2715B8u;
    // 0x2715b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2715b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2715bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2715bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2715c0: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x2715c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x2715c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2715c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2715c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2715cc: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x2715ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x2715d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2715D0u;
    {
        const bool branch_taken_0x2715d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2715d0) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x2715D8u;
label_2715d8:
    // 0x2715d8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2715d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2715dc: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x2715dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x2715e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2715e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2715e4: 0x0  nop
    ctx->pc = 0x2715e4u;
    // NOP
    // 0x2715e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2715e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2715ec: 0x0  nop
    ctx->pc = 0x2715ecu;
    // NOP
    // 0x2715f0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2715F0u;
    {
        const bool branch_taken_0x2715f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2715f0) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x2715F8u;
    // 0x2715f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2715f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2715fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2715fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271600: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x271600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27160c: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x27160cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x271610: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x271610u;
    {
        const bool branch_taken_0x271610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271610) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x271618u;
label_271618:
    // 0x271618: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27161c: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x27161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x271620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271624: 0x0  nop
    ctx->pc = 0x271624u;
    // NOP
    // 0x271628: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27162c: 0x0  nop
    ctx->pc = 0x27162cu;
    // NOP
    // 0x271630: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x271630u;
    {
        const bool branch_taken_0x271630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271630) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x271638u;
    // 0x271638: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27163c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271640: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x271640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27164c: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x27164cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
label_271650:
    // 0x271650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271654: 0x8c24fd70  lw          $a0, -0x290($at)
    ctx->pc = 0x271654u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD70u));
    // 0x271658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27165c: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x27165Cu;
    {
        const bool branch_taken_0x27165c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27165c) {
            ctx->pc = 0x271768u;
            goto label_271768;
        }
    }
    ctx->pc = 0x271664u;
    // 0x271664: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271668: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x271668u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD60u));
    // 0x27166c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271670: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x271670u;
    {
        const bool branch_taken_0x271670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271670) {
            ctx->pc = 0x271700u;
            goto label_271700;
        }
    }
    ctx->pc = 0x271678u;
    // 0x271678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27167c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27167Cu;
    {
        const bool branch_taken_0x27167c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27167c) {
            ctx->pc = 0x271698u;
            goto label_271698;
        }
    }
    ctx->pc = 0x271684u;
    // 0x271684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x271684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271688: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271688u;
    {
        const bool branch_taken_0x271688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271688) {
            ctx->pc = 0x271698u;
            goto label_271698;
        }
    }
    ctx->pc = 0x271690u;
    // 0x271690: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x271690u;
    {
        const bool branch_taken_0x271690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271690) {
            ctx->pc = 0x271760u;
            goto label_271760;
        }
    }
    ctx->pc = 0x271698u;
label_271698:
    // 0x271698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27169c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27169cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2716a0: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x2716A0u;
    SET_GPR_U32(ctx, 31, 0x2716A8u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x2716A0u, 0x2716A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716A8u;
label_2716a8:
    // 0x2716a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2716a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2716ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716b0: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x2716B0u;
    SET_GPR_U32(ctx, 31, 0x2716B8u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x2716B0u, 0x2716B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716B8u;
label_2716b8:
    // 0x2716b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2716b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2716bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716c0: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x2716C0u;
    SET_GPR_U32(ctx, 31, 0x2716C8u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x2716C0u, 0x2716C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716C8u;
label_2716c8:
    // 0x2716c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2716c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2716ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2716d0: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2716D0u;
    SET_GPR_U32(ctx, 31, 0x2716D8u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2716D0u, 0x2716D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716D8u;
label_2716d8:
    // 0x2716d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2716d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2716dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716e0: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2716E0u;
    SET_GPR_U32(ctx, 31, 0x2716E8u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2716E0u, 0x2716E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716E8u;
label_2716e8:
    // 0x2716e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2716e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2716ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716f0: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2716F0u;
    SET_GPR_U32(ctx, 31, 0x2716F8u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2716F0u, 0x2716F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716F8u;
label_2716f8:
    // 0x2716f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2716F8u;
    {
        const bool branch_taken_0x2716f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716f8) {
            ctx->pc = 0x271760u;
            goto label_271760;
        }
    }
    ctx->pc = 0x271700u;
label_271700:
    // 0x271700: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271708: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x271708u;
    SET_GPR_U32(ctx, 31, 0x271710u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x271708u, 0x271710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271710u;
label_271710:
    // 0x271710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271714: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271718: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x271718u;
    SET_GPR_U32(ctx, 31, 0x271720u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x271718u, 0x271720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271720u;
label_271720:
    // 0x271720: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271728: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x271728u;
    SET_GPR_U32(ctx, 31, 0x271730u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x271728u, 0x271730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271730u;
label_271730:
    // 0x271730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271738: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x271738u;
    SET_GPR_U32(ctx, 31, 0x271740u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x271738u, 0x271740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271740u;
label_271740:
    // 0x271740: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271744: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271748: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x271748u;
    SET_GPR_U32(ctx, 31, 0x271750u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x271748u, 0x271750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271750u;
label_271750:
    // 0x271750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271758: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x271758u;
    SET_GPR_U32(ctx, 31, 0x271760u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x271758u, 0x271760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271760u;
label_271760:
    // 0x271760: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271764: 0xac20fd70  sw          $zero, -0x290($at)
    ctx->pc = 0x271764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
label_271768:
    // 0x271768: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27176c: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x271770: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x271770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x271774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271778: 0x0  nop
    ctx->pc = 0x271778u;
    // NOP
    // 0x27177c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27177cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271780: 0x0  nop
    ctx->pc = 0x271780u;
    // NOP
    // 0x271784: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x271784u;
    {
        const bool branch_taken_0x271784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271784) {
            ctx->pc = 0x2717F4u;
            goto label_2717f4;
        }
    }
    ctx->pc = 0x27178Cu;
    // 0x27178c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27178cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271790: 0x8c24fd58  lw          $a0, -0x2A8($at)
    ctx->pc = 0x271790u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD58u));
    // 0x271794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271798: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x271798u;
    {
        const bool branch_taken_0x271798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271798) {
            ctx->pc = 0x271854u;
            goto label_271854;
        }
    }
    ctx->pc = 0x2717A0u;
    // 0x2717a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2717a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2717a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2717a8: 0xac22fd58  sw          $v0, -0x2A8($at)
    ctx->pc = 0x2717a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD58u, _value); } while (0);
    // 0x2717ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2717acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2717b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2717b4: 0xc050018  jal         func_140060
    ctx->pc = 0x2717B4u;
    SET_GPR_U32(ctx, 31, 0x2717BCu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x2717B4u, 0x2717BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717BCu;
label_2717bc:
    // 0x2717bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2717bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2717c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2717c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717c4: 0xc050018  jal         func_140060
    ctx->pc = 0x2717C4u;
    SET_GPR_U32(ctx, 31, 0x2717CCu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x2717C4u, 0x2717CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717CCu;
label_2717cc:
    // 0x2717cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2717ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2717d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2717d4: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2717D4u;
    SET_GPR_U32(ctx, 31, 0x2717DCu);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2717D4u, 0x2717DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2717dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2717e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2717e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717e4: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2717E4u;
    SET_GPR_U32(ctx, 31, 0x2717ECu);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2717E4u, 0x2717ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717ECu;
label_2717ec:
    // 0x2717ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2717ECu;
    {
        const bool branch_taken_0x2717ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2717ec) {
            ctx->pc = 0x271854u;
            goto label_271854;
        }
    }
    ctx->pc = 0x2717F4u;
label_2717f4:
    // 0x2717f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2717f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2717f8: 0x8c24fd58  lw          $a0, -0x2A8($at)
    ctx->pc = 0x2717f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD58u));
    // 0x2717fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2717fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271800: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x271800u;
    {
        const bool branch_taken_0x271800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271800) {
            ctx->pc = 0x271854u;
            goto label_271854;
        }
    }
    ctx->pc = 0x271808u;
    // 0x271808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27180c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27180cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271810: 0xac22fd58  sw          $v0, -0x2A8($at)
    ctx->pc = 0x271810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD58u, _value); } while (0);
    // 0x271814: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27181c: 0xc050018  jal         func_140060
    ctx->pc = 0x27181Cu;
    SET_GPR_U32(ctx, 31, 0x271824u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27181Cu, 0x271824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271824u;
label_271824:
    // 0x271824: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271828: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27182c: 0xc050018  jal         func_140060
    ctx->pc = 0x27182Cu;
    SET_GPR_U32(ctx, 31, 0x271834u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27182Cu, 0x271834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271834u;
label_271834:
    // 0x271834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27183c: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x27183Cu;
    SET_GPR_U32(ctx, 31, 0x271844u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x27183Cu, 0x271844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271844u;
label_271844:
    // 0x271844: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27184c: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x27184Cu;
    SET_GPR_U32(ctx, 31, 0x271854u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x27184Cu, 0x271854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271854u;
label_271854:
    // 0x271854: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x271854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x271858: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x271858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27185c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271860: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x271860u;
    {
        const bool branch_taken_0x271860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x271860) {
            ctx->pc = 0x2718A0u;
            goto label_2718a0;
        }
    }
    ctx->pc = 0x271868u;
    // 0x271868: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x271868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27186c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x27186cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x271870: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x271870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x271874: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x271874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x271878: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271878u;
    {
        const bool branch_taken_0x271878 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x271878) {
            ctx->pc = 0x2718A0u;
            goto label_2718a0;
        }
    }
    ctx->pc = 0x271880u;
    // 0x271880: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x271880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x271884: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x271884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x271888: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x271888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x27188c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x27188cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x271890: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x271890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x271894: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x271894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
    // 0x271898: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x271898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x27189c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x27189cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_2718a0:
    // 0x2718a0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2718a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2718a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2718a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2718a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2718a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2718ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2718acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2718b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2718b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2718b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2718B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2718B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2718BCu;
}
