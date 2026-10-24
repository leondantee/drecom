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

// Function: entry_001574e4
// Address: 0x1574e4 - 0x157580
void entry_001574e4_0x1574e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001574e4_0x1574e4");
#endif

    switch (ctx->pc) {
        case 0x15755cu: goto label_15755c;
        default: break;
    }

    ctx->pc = 0x1574e4u;

    // 0x1574e4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1574e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1574e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1574ec: 0x2485f760  addiu       $a1, $a0, -0x8A0
    ctx->pc = 0x1574ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x1574f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1574f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1574f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1574f8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1574f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1574fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1574fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157500: 0x0  nop
    ctx->pc = 0x157500u;
    // NOP
    // 0x157504: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157508: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x157508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15750c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15750cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157510: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157514: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15751c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157524: 0x0  nop
    ctx->pc = 0x157524u;
    // NOP
    // 0x157528: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15752c: 0x0  nop
    ctx->pc = 0x15752cu;
    // NOP
    // 0x157530: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x157530u;
    {
        const bool branch_taken_0x157530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157530) {
            ctx->pc = 0x157580u;
            return;
        }
    }
    ctx->pc = 0x157538u;
    // 0x157538: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15753c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15753cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157540: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157544: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157548: 0x2482f760  addiu       $v0, $a0, -0x8A0
    ctx->pc = 0x157548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x15754c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157550: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x157550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x157554: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x157554u;
    SET_GPR_U32(ctx, 31, 0x15755Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x157554u, 0x15755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15755Cu;
label_15755c:
    // 0x15755c: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x15755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x157560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157564: 0x0  nop
    ctx->pc = 0x157564u;
    // NOP
    // 0x157568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x157568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15756c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x15756cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157570: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157574: 0x2443f7d0  addiu       $v1, $v0, -0x830
    ctx->pc = 0x157574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157578: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15757c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15757cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x157580u;
}
