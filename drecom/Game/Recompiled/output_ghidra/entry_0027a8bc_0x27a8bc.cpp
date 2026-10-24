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

// Function: entry_0027a8bc
// Address: 0x27a8bc - 0x27a9b4
void entry_0027a8bc_0x27a8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a8bc_0x27a8bc");
#endif

    ctx->pc = 0x27a8bcu;

    // 0x27a8bc: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a8c4: 0x0  nop
    ctx->pc = 0x27a8c4u;
    // NOP
    // 0x27a8c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a8cc: 0x0  nop
    ctx->pc = 0x27a8ccu;
    // NOP
    // 0x27a8d0: 0x45010083  bc1t        . + 4 + (0x83 << 2)
    ctx->pc = 0x27A8D0u;
    {
        const bool branch_taken_0x27a8d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a8d0) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A8D8u;
    // 0x27a8d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a8dc: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x27a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x27a8e0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x27a8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x27a8e4: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x27A8E4u;
    {
        const bool branch_taken_0x27a8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a8e4) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A8ECu;
    // 0x27a8ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a8f0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a8f4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a8f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a8fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27a900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a904: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x27a904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x27a908: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a90c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a910: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a91c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x27a91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x27a920: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27a920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x27a924: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x27a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27a928: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a92c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x27a92cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a930: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x27a930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a934: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a938: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x27a938u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x27a93c: 0x0  nop
    ctx->pc = 0x27a93cu;
    // NOP
    // 0x27a940: 0x0  nop
    ctx->pc = 0x27a940u;
    // NOP
    // 0x27a944: 0x1810  mfhi        $v1
    ctx->pc = 0x27a944u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x27a948: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x27A948u;
    {
        const bool branch_taken_0x27a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a948) {
            ctx->pc = 0x27A9B4u;
            return;
        }
    }
    ctx->pc = 0x27A950u;
    // 0x27a950: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a954: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a958: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a95c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a964: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a968: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x27a968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x27a96c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a970: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a974: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a978: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a980: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x27a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x27a984: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27a984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x27a988: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x27a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27a98c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a990: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x27a990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x27a994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a998: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a99c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x27a99cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x27a9a0: 0x0  nop
    ctx->pc = 0x27a9a0u;
    // NOP
    // 0x27a9a4: 0x0  nop
    ctx->pc = 0x27a9a4u;
    // NOP
    // 0x27a9a8: 0x1810  mfhi        $v1
    ctx->pc = 0x27a9a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x27a9ac: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x27A9ACu;
    {
        const bool branch_taken_0x27a9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a9ac) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27A9B4u;
}
