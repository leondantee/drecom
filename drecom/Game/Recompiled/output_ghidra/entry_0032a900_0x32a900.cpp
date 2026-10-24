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

// Function: entry_0032a900
// Address: 0x32a900 - 0x32a9a0
void entry_0032a900_0x32a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a900_0x32a900");
#endif

    ctx->pc = 0x32a900u;

    // 0x32a900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a904: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x32a904u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32a908: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32a908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32a90c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32a90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32a910: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x32A910u;
    {
        const bool branch_taken_0x32a910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a910) {
            ctx->pc = 0x32ACA8u;
            return;
        }
    }
    ctx->pc = 0x32A918u;
    // 0x32a918: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32a91c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a920: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32a920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    // 0x32a924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a928: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32a928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a92c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a930: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32a930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32a934: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x32A934u;
    {
        const bool branch_taken_0x32a934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a934) {
            ctx->pc = 0x32AC3Cu;
            return;
        }
    }
    ctx->pc = 0x32A93Cu;
    // 0x32a93c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a940: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32a940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a944: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a948: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x32a94c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32A94Cu;
    {
        const bool branch_taken_0x32a94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a94c) {
            ctx->pc = 0x32A9A0u;
            return;
        }
    }
    ctx->pc = 0x32A954u;
    // 0x32a954: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a958: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32a958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32a95c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a960: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32a960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32a964: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32A964u;
    {
        const bool branch_taken_0x32a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a964) {
            ctx->pc = 0x32A9A0u;
            return;
        }
    }
    ctx->pc = 0x32A96Cu;
    // 0x32a96c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a970: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a978: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a97c: 0xac23a220  sw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a97cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
    // 0x32a980: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a984: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a988: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32a988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32a98c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A98Cu;
    {
        const bool branch_taken_0x32a98c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a98c) {
            ctx->pc = 0x32A9A0u;
            return;
        }
    }
    ctx->pc = 0x32A994u;
    // 0x32a994: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32a998: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a99c: 0xac23a220  sw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a99cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
    ctx->pc = 0x32a9a0u;
}
