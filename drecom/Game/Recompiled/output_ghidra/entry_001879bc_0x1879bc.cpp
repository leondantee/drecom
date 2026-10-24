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

// Function: entry_001879bc
// Address: 0x1879bc - 0x187a54
void entry_001879bc_0x1879bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001879bc_0x1879bc");
#endif

    ctx->pc = 0x1879bcu;

    // 0x1879bc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1879bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1879c0: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x1879c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x1879c4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1879c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1879c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1879c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1879cc: 0x0  nop
    ctx->pc = 0x1879ccu;
    // NOP
    // 0x1879d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1879d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1879d4: 0x0  nop
    ctx->pc = 0x1879d4u;
    // NOP
    // 0x1879d8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1879D8u;
    {
        const bool branch_taken_0x1879d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1879d8) {
            ctx->pc = 0x187A54u;
            return;
        }
    }
    ctx->pc = 0x1879E0u;
    // 0x1879e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1879e4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1879e4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1879e8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1879e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1879ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1879ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1879f0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1879f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1879f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1879f8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1879f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1879fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1879fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x187a00: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x187a04: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x187a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187a08: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x187a0c: 0x3c03f2ff  lui         $v1, 0xF2FF
    ctx->pc = 0x187a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62207 << 16));
    // 0x187a10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x187a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x187a14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187a18: 0xaca30158  sw          $v1, 0x158($a1)
    ctx->pc = 0x187a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 3));
    // 0x187a1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187a20: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x187a24: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187a28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187a28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x187a2c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x187a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x187a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187a34: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x187a38: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x187a3c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x187a40: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x187a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187a44: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x187a48: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x187a4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x187a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x187a50: 0xaca30158  sw          $v1, 0x158($a1)
    ctx->pc = 0x187a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 3));
    ctx->pc = 0x187a54u;
}
